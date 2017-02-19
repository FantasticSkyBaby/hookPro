//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TBAccsLimiter : NSObject
{
    NSMutableDictionary *_LimiModeltDict;	// 8 = 0x8
    NSMutableDictionary *_limitRuleDict;	// 16 = 0x10
}

+ (id)shareInstance;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *limitRuleDict; // @synthesize limitRuleDict=_limitRuleDict;
@property(retain, nonatomic) NSMutableDictionary *LimiModeltDict; // @synthesize LimiModeltDict=_LimiModeltDict;
- (void).cxx_destruct;
- (void)delInvalidRule;
- (void)checkLimitIfHaveToSave:(id)arg1;
- (void)sendLimitedRequest:(id)arg1;
- (void)addRequestLimitControl:(id)arg1 withRuleModel:(id)arg2;
- (id)findDelayMaxRuleModel:(id)arg1;
- (id)requestLimitModel:(id)arg1;
- (id)init;

@end
