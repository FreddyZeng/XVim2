//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/DVTFindBar.h>

@interface DVTBasicFindBar : DVTFindBar
{
    long long _foundResultCount;
}

- (void)forceSetFoundResultCount:(long long)arg1;
- (void)updateStatusInformingDelegate:(BOOL)arg1;
- (void)performFindHighlightingFirstResult:(BOOL)arg1 informDelegate:(BOOL)arg2;
- (void)findBarLostFocus;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (BOOL)supportsCaseInsensitiveMatch;
- (BOOL)supportsTextMatchStyle:(unsigned long long)arg1;
- (BOOL)supportsFindBarMode:(unsigned long long)arg1;
- (BOOL)supportsFindBarType:(unsigned long long)arg1;
@property(retain, nonatomic) id findObject;

@end

