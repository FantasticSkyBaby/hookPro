//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TGDetailFooterToolModel : NSObject
{
    _Bool _hasGetFeature;	// 8 = 0x8
    _Bool _getBool;	// 9 = 0x9
    NSString *_getCnt;	// 16 = 0x10
    long long _sid;	// 24 = 0x18
    long long _uid;	// 32 = 0x20
    long long _commentCnt;	// 40 = 0x28
}

@property(nonatomic) long long commentCnt; // @synthesize commentCnt=_commentCnt;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) long long sid; // @synthesize sid=_sid;
@property(nonatomic) _Bool getBool; // @synthesize getBool=_getBool;
@property(nonatomic) _Bool hasGetFeature; // @synthesize hasGetFeature=_hasGetFeature;
@property(copy, nonatomic) NSString *getCnt; // @synthesize getCnt=_getCnt;
- (void).cxx_destruct;

@end
