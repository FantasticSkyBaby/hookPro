//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MLRoomDecorationTag, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface MLRoomDecorationCVSECell : UICollectionViewCell
{
    _Bool _subAlert;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_iconImageView;
    UILabel *_tagLabel;
    UIView *_iconBgView;
    MLRoomDecorationTag *_desTag;
    UIActivityIndicatorView *_waitingIndicatorView;
}

+ (id)cellWithCollectionView:(id)arg1 indexPath:(id)arg2;
@property(nonatomic) __weak UIActivityIndicatorView *waitingIndicatorView; // @synthesize waitingIndicatorView=_waitingIndicatorView;
@property(retain, nonatomic) MLRoomDecorationTag *desTag; // @synthesize desTag=_desTag;
@property(nonatomic) _Bool subAlert; // @synthesize subAlert=_subAlert;
@property(nonatomic) __weak UIView *iconBgView; // @synthesize iconBgView=_iconBgView;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)borderTypeSelected:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)showIndicator:(_Bool)arg1;
- (void)awakeFromNib;

@end
