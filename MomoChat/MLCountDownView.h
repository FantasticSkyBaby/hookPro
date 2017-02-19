//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface MLCountDownView : UIView
{
    _Bool _isAnimating;
    UILabel *_countLabel;
    long long _currentCount;
    CDUnknownBlockType _completion;
}

@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long currentCount; // @synthesize currentCount=_currentCount;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
- (void).cxx_destruct;
- (void)delayView;
- (void)doNext;
- (void)startCountDownAnimationWithDuration:(long long)arg1 compeltion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
