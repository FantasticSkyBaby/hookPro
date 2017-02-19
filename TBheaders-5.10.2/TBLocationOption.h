//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSMutableCopying-Protocol.h"

@class NSString;

@interface TBLocationOption : NSObject <NSMutableCopying>
{
    _Bool _passiveCallback;	// 8 = 0x8
    int _locationMode;	// 12 = 0xc
    int _timeLimit;	// 16 = 0x10
    int _timeOut;	// 20 = 0x14
    int _accuracy;	// 24 = 0x18
    int _resultModel;	// 28 = 0x1c
    NSString *_bundle;	// 32 = 0x20
}

+ (id)optionWithLocationMode:(int)arg1 timeLimit:(int)arg2 accuracy:(int)arg3 resultModel:(int)arg4 timeOut:(int)arg5 passiveCallback:(_Bool)arg6 bundle:(id)arg7;
+ (id)optionWithLocationMode:(int)arg1 timeLimit:(int)arg2 accuracy:(int)arg3 resultModel:(int)arg4 bundle:(id)arg5;
+ (id)defaultOptionWithBundle:(id)arg1;
@property(retain, nonatomic) NSString *bundle; // @synthesize bundle=_bundle;
@property(nonatomic) _Bool passiveCallback; // @synthesize passiveCallback=_passiveCallback;
@property(nonatomic) int resultModel; // @synthesize resultModel=_resultModel;
@property(nonatomic) int accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) int timeOut; // @synthesize timeOut=_timeOut;
@property(nonatomic) int timeLimit; // @synthesize timeLimit=_timeLimit;
@property(nonatomic) int locationMode; // @synthesize locationMode=_locationMode;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
