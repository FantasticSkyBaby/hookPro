//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface AliDetailPidVidPair : NSObject
{
    NSString *_pid;	// 8 = 0x8
    NSString *_vid;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (id)initWithPidvid:(id)arg1;
- (id)initWithPid:(id)arg1 vid:(id)arg2;

@end
