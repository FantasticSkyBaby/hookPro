//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSyncBasePrtl.h"

@class NSData, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CNewInitPrtl : CSyncBasePrtl
{
    NSData *m_dtCurSyncBuffer;
    NSData *m_dtMaxSyncBuffer;
    NSString *m_nsUsrName;
    NSObject<OS_dispatch_queue> *m_worker;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *m_worker; // @synthesize m_worker;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
@property(retain, nonatomic) NSData *m_dtMaxSyncBuffer; // @synthesize m_dtMaxSyncBuffer;
@property(retain, nonatomic) NSData *m_dtCurSyncBuffer; // @synthesize m_dtCurSyncBuffer;
- (void).cxx_destruct;
- (_Bool)HandleResp:(void *)arg1;
- (void)doParseCMD:(const SKSmartPickleStruct_73e5f6b0 *)arg1 dicMessageInfo:(id)arg2;
- (void)InitReq:(void *)arg1;
- (void)dealloc;
- (id)init;

@end
