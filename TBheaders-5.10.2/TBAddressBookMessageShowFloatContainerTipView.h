//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;

@interface TBAddressBookMessageShowFloatContainerTipView : UIView
{
    UIImageView *_backgroundImageView;	// 8 = 0x8
    UIButton *_tipButton;	// 16 = 0x10
}

+ (id)messageShowFloatContainerTipView;
@property(retain, nonatomic) UIButton *tipButton; // @synthesize tipButton=_tipButton;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)clickedTipButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
