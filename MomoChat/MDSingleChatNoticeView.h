//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, NSString, UIButton, UILabel;

@interface MDSingleChatNoticeView : UIView
{
    NSString *gotoString;
    UIView *_backgroundView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_starButton;
    CAShapeLayer *_triangleLayer;
}

+ (_Bool)checkNoticeDictionaryIsValid:(id)arg1;
@property(retain, nonatomic) CAShapeLayer *triangleLayer; // @synthesize triangleLayer=_triangleLayer;
@property(retain, nonatomic) UIButton *starButton; // @synthesize starButton=_starButton;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (id)triangle;
- (void)updateNotieViewWithNoticeDetails:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (void)tapGestureHanppend:(id)arg1;
- (void)hideNoticeView:(_Bool)arg1;
- (void)showNoticeView:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
