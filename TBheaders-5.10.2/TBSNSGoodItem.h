//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBSNSGoodItem : TBJSONModel
{
    NSString *_title;	// 8 = 0x8
    NSString *_userId;	// 16 = 0x10
    NSString *_nid;	// 24 = 0x18
    NSString *_pictUrl;	// 32 = 0x20
    NSString *_postFee;	// 40 = 0x28
    NSString *_nick;	// 48 = 0x30
    NSString *_provcity;	// 56 = 0x38
    NSString *_zkFinalPriceWap;	// 64 = 0x40
    NSString *_uvsum;	// 72 = 0x48
    NSString *_realPostFee;	// 80 = 0x50
}

@property(retain, nonatomic) NSString *realPostFee; // @synthesize realPostFee=_realPostFee;
@property(retain, nonatomic) NSString *uvsum; // @synthesize uvsum=_uvsum;
@property(retain, nonatomic) NSString *zkFinalPriceWap; // @synthesize zkFinalPriceWap=_zkFinalPriceWap;
@property(retain, nonatomic) NSString *provcity; // @synthesize provcity=_provcity;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *postFee; // @synthesize postFee=_postFee;
@property(retain, nonatomic) NSString *pictUrl; // @synthesize pictUrl=_pictUrl;
@property(retain, nonatomic) NSString *nid; // @synthesize nid=_nid;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end
