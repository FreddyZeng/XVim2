//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSProgressIndicator, NSStackView, NSString, NSTextField, NSWindow;

@interface _TtC6IDEKit52IDESourceControlRepositoryCredentialWindowController : NSWindowController
{
    // Error parsing type: , name: stackView
    // Error parsing type: , name: primaryButton
    // Error parsing type: , name: progressWindow
    // Error parsing type: , name: progressTitleField
    // Error parsing type: , name: progressSubtitleField
    // Error parsing type: , name: progressBar
    // Error parsing type: , name: parentWindow
    // Error parsing type: , name: repository
    // Error parsing type: , name: operation
    // Error parsing type: , name: completionHandler
    // Error parsing type: , name: credentialViewController
    // Error parsing type: , name: hostedAccountWindowController
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)primaryAction:(id)arg1;
- (void)cancel:(id)arg1;
@property(nonatomic, readonly) NSString *windowNibName;
@property(nonatomic, retain) NSProgressIndicator *progressBar; // @synthesize progressBar;
@property(nonatomic, retain) NSTextField *progressSubtitleField; // @synthesize progressSubtitleField;
@property(nonatomic, retain) NSTextField *progressTitleField; // @synthesize progressTitleField;
@property(nonatomic, retain) NSWindow *progressWindow; // @synthesize progressWindow;
@property(nonatomic, retain) NSButton *primaryButton; // @synthesize primaryButton;
@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView;

@end
