//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EtaModel.h"

@interface MDSVipInfo : EtaModel
{
    _Bool _isValid;
    _Bool _isYearVip;
    int _activeLevel;
}

+ (id)dictFromVipInfo:(id)arg1;
+ (id)vipInfoFromDict:(id)arg1;
+ (id)eta_jsonKeyPathsByProperty;
@property(nonatomic) int activeLevel; // @synthesize activeLevel=_activeLevel;
@property(nonatomic) _Bool isYearVip; // @synthesize isYearVip=_isYearVip;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;

@end
