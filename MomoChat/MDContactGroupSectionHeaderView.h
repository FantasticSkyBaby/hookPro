//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MDContactGroupSectionHeaderViewModel, UIButton, UIImageView, UILabel;

@interface MDContactGroupSectionHeaderView : UIView
{
    id <MDContactGroupSectionHeaderViewDelegate> _delegate;
    MDContactGroupSectionHeaderViewModel *_currentModel;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIButton *_rightButton;
    UIImageView *_arrowImageView;
    UIImageView *_circleImageView;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *circleImageView; // @synthesize circleImageView=_circleImageView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MDContactGroupSectionHeaderViewModel *currentModel; // @synthesize currentModel=_currentModel;
@property(nonatomic) __weak id <MDContactGroupSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickHeaderView;
- (double)controlWidthFont:(id)arg1 content:(id)arg2 maxWidth:(double)arg3;
- (void)updateViewWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
