//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTipsViewController.h"

@class CADisplayLink, NSString;

__attribute__((visibility("hidden")))
@interface CountDownTipViewController : MMTipsViewController
{
    CADisplayLink *m_timer;
    unsigned int m_uiCurrentCount;
    id m_userData;
    unsigned int m_uiCountDown;
    NSString *m_nsTipViewMessage;
}

@property(retain, nonatomic) id m_userData; // @synthesize m_userData;
@property(nonatomic) unsigned int m_uiCountDown; // @synthesize m_uiCountDown;
@property(retain, nonatomic) NSString *m_nsTipViewMessage; // @synthesize m_nsTipViewMessage;
- (void).cxx_destruct;
- (void)showWithAnimated:(int)arg1;
- (void)countDownTip;
- (void)dealloc;

@end
