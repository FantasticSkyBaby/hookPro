//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BTSRequestDelegate-Protocol.h"

@class BTSRequest, NSDictionary, NSString;

@interface RainbowBucket : NSObject <BTSRequestDelegate>
{
    _Bool _started;	// 8 = 0x8
    NSString *_testsVersion;	// 16 = 0x10
    NSDictionary *_tests;	// 24 = 0x18
    BTSRequest *_request;	// 32 = 0x20
}

+ (id)sharedInstance;
@property(retain, nonatomic) BTSRequest *request; // @synthesize request=_request;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSDictionary *tests; // @synthesize tests=_tests;
@property(retain, nonatomic) NSString *testsVersion; // @synthesize testsVersion=_testsVersion;
- (void).cxx_destruct;
- (void)testsUpdated:(id)arg1 version:(id)arg2;
- (id)testsRnCompact;
- (id)testsRn;
- (id)variationOfTest:(id)arg1;
- (id)valuesOfTest:(id)arg1;
- (id)stringValueOfTest:(id)arg1 name:(id)arg2 defval:(id)arg3;
- (id)variationContentOfTest:(id)arg1;
- (void)refreshImmediately;
- (void)stopUpdating;
- (void)stop;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
