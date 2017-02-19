//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIImageView, UILabel;

@interface MDMomentTopicEntranceView : UIButton
{
    _Bool _showRedTip;
    NSString *_placeholderString;
    NSString *_textString;
    UILabel *_textLabel;
    UIImageView *_iconView;
    UIImageView *_iconBackView;
    UIImageView *_redPointView;
}

+ (id)momentTopicEntranceView;
@property(retain, nonatomic) UIImageView *redPointView; // @synthesize redPointView=_redPointView;
@property(retain, nonatomic) UIImageView *iconBackView; // @synthesize iconBackView=_iconBackView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) _Bool showRedTip; // @synthesize showRedTip=_showRedTip;
@property(retain, nonatomic) NSString *textString; // @synthesize textString=_textString;
@property(retain, nonatomic) NSString *placeholderString; // @synthesize placeholderString=_placeholderString;
- (void).cxx_destruct;
- (void)refreshLayout;
- (id)init;

@end
