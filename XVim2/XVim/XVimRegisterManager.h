//
//  XVimRegister.h
//  XVim
//
//  Created by Nader Akoury on 3/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "XVimDefs.h"
#import "XVimKeyStroke.h"
#import <Foundation/Foundation.h>
#import "XVim2-Swift.h"

NS_ASSUME_NONNULL_BEGIN

// Never implement direct access to XVimRegister object.
// XVimRegisterManager must handle all the requests.
@interface XVimRegisterManager : NSObject
@property NSString* lastExecutedRegister;
/**
 * Returns XVimRegister object for the registry "name".
 * The register may be invalid after a few key input because
 * yank/delete change or rotate register contents.
 * If name is nil it return register of ""
 **/
- (XVimRegister*)registerByName:(NSString*)name;

/**
 * 'name' argument may take 'nil' or one character string like @"a".
 * If 'nil' is specified it means no register is specified for the method.
 * This is important when deleting text.
 * In Vim unnamed register refered by "" is used when no register is specfied.
 * But when you specify "" manually and delete text the text will
 * go into "0 register. (See :help registers)
 * So specifying @"\"" and nil are different for yank/delete method.
 **/
- (XVimString*)xvimStringForRegister:(NSString*)name;
- (void)yank:(XVimString*)string type:(XVimTextType)type onRegister:(NSString*)name;
- (void)delete:(XVimString*)string type:(XVimTextType)type onRegister:(NSString*)name shouldReplaceRegister:(BOOL)isReplacing;
- (void)textInserted:(XVimString*)string type:(XVimTextType)type;
- (void)commandExecuted:(XVimString*)string type:(XVimTextType)type;
- (void)registerExecuted:(NSString*)name;

/**
 * Start recording into a register specified by 'name'.
 * If name is nil it uses unnamed register to record into.
 * If name is "" it uses "0 to record into.
 * You can not call startRecording when you have already started recording.
 * You can check if it is recording by isRecording method.
 **/
- (void)startRecording:(NSString*)name;

/**
 * Return if it is in recording state
 **/
- (BOOL)isRecording;

/**
 * Record input
 **/
- (void)record:(XVimString*)string;

/**
 * Stop or Cancel recoding
 **/
- (void)stopRecording:(BOOL)cancel;

- (BOOL)isValidRegister:(NSString*)name;
- (BOOL)isValidForYank:(NSString*)name;
- (BOOL)isValidForRecording:(NSString*)name;

- (void)enumerateRegisters:(void (^)(NSString* name, XVimRegister* reg))block;
@end

NS_ASSUME_NONNULL_END
