//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPResult.h"

@class NSString;

@interface TPCouponResult : TPResult
{
    NSString *_title;	// 8 = 0x8
    NSString *_subTitle;	// 16 = 0x10
    NSString *_imageUrl;	// 24 = 0x18
    NSString *_preferPrefix;	// 32 = 0x20
    NSString *_prefer;	// 40 = 0x28
    NSString *_preferSuffix;	// 48 = 0x30
    NSString *_preferDescription;	// 56 = 0x38
    NSString *_text;	// 64 = 0x40
    NSString *_leftBtnText;	// 72 = 0x48
    NSString *_rightBtnText;	// 80 = 0x50
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(retain, nonatomic) NSString *rightBtnText; // @synthesize rightBtnText=_rightBtnText;
@property(retain, nonatomic) NSString *leftBtnText; // @synthesize leftBtnText=_leftBtnText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *preferDescription; // @synthesize preferDescription=_preferDescription;
@property(retain, nonatomic) NSString *preferSuffix; // @synthesize preferSuffix=_preferSuffix;
@property(retain, nonatomic) NSString *prefer; // @synthesize prefer=_prefer;
@property(retain, nonatomic) NSString *preferPrefix; // @synthesize preferPrefix=_preferPrefix;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end
