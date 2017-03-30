//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableArray, NSObject, NSString, WCImageConvertDataProvider, WCImageConvertReportData;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WCImageConvertMgr : MMService <MMService, MMKernelExt>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_convertList;
    _Bool _bStop;
    WCImageConvertDataProvider *_dataProvider;
    WCImageConvertReportData *_reportData;
}

- (void).cxx_destruct;
- (_Bool)waitForAWhile;
- (void)convertMsgPic:(id)arg1;
- (_Bool)isNeddConvert:(id)arg1;
- (void)recoveryBakPicToNormalPicEx;
- (void)recoveryBakPicToNormalPic;
- (void)stopConvert;
- (void)converting;
- (id)prepareData;
- (void)startConvert;
- (void)onPreQuit;
- (void)onServiceClearData;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceReloadData;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
