//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImageView, UILabel;
@protocol TBMyTaobaoMoreToolsButtonDelegate;

@interface TBMyTaobaoMoreToolsButton : UIButton
{
    id <TBMyTaobaoMoreToolsButtonDelegate> _delegate;	// 8 = 0x8
    NSString *_toolsViewTitle;	// 16 = 0x10
    NSString *_toolsViewDescription;	// 24 = 0x18
    NSString *_iconUrl;	// 32 = 0x20
    NSString *_iconDesc;	// 40 = 0x28
    UILabel *_toolsArrowLabel;	// 48 = 0x30
    UILabel *_toolsTitleLabel;	// 56 = 0x38
    UILabel *_toolsDescriptionLabel;	// 64 = 0x40
    UIImageView *_iconImage;	// 72 = 0x48
    UILabel *_iconDescLabel;	// 80 = 0x50
    unsigned long long _type;	// 88 = 0x58
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UILabel *iconDescLabel; // @synthesize iconDescLabel=_iconDescLabel;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UILabel *toolsDescriptionLabel; // @synthesize toolsDescriptionLabel=_toolsDescriptionLabel;
@property(retain, nonatomic) UILabel *toolsTitleLabel; // @synthesize toolsTitleLabel=_toolsTitleLabel;
@property(retain, nonatomic) UILabel *toolsArrowLabel; // @synthesize toolsArrowLabel=_toolsArrowLabel;
@property(copy, nonatomic) NSString *iconDesc; // @synthesize iconDesc=_iconDesc;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *toolsViewDescription; // @synthesize toolsViewDescription=_toolsViewDescription;
@property(copy, nonatomic) NSString *toolsViewTitle; // @synthesize toolsViewTitle=_toolsViewTitle;
@property(nonatomic) __weak id <TBMyTaobaoMoreToolsButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configViewsWithType:(unsigned long long)arg1;
- (void)onClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 type:(unsigned long long)arg2 IconUrl:(id)arg3 IconDesc:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 type:(unsigned long long)arg2;

@end
