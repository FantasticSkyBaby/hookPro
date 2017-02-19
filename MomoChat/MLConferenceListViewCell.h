//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MLConferenceListItem, NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView;

@interface MLConferenceListViewCell : UICollectionViewCell
{
    UIButton *_bottomButton;
    UIButton *_profileButton;
    CDUnknownBlockType _showGuestProfile;
    CDUnknownBlockType _bottomButtonTapped;
    UIView *_leftSeperatorView;
    UIImageView *_avatar;
    UILabel *_score;
    UILabel *_userName;
    UILabel *_timeLabel;
    NSLayoutConstraint *_bottomButtonWidth;
    MLConferenceListItem *_currentItem;
}

@property(retain, nonatomic) MLConferenceListItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) NSLayoutConstraint *bottomButtonWidth; // @synthesize bottomButtonWidth=_bottomButtonWidth;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) UILabel *score; // @synthesize score=_score;
@property(retain, nonatomic) UIImageView *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) UIView *leftSeperatorView; // @synthesize leftSeperatorView=_leftSeperatorView;
@property(copy, nonatomic) CDUnknownBlockType bottomButtonTapped; // @synthesize bottomButtonTapped=_bottomButtonTapped;
@property(copy, nonatomic) CDUnknownBlockType showGuestProfile; // @synthesize showGuestProfile=_showGuestProfile;
@property(retain, nonatomic) UIButton *profileButton; // @synthesize profileButton=_profileButton;
@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)bottomButtonAction:(id)arg1;
- (void)profileButtonAction:(id)arg1;
- (void)updateButton:(id)arg1 atIndex:(long long)arg2;
- (void)updateTimeLabel:(id)arg1;
- (void)setupWithItem:(id)arg1 atIndex:(long long)arg2;
- (void)awakeFromNib;

@end
