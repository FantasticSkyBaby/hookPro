//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, TRDOpSubConfig, TRDRTUploadStrategy;

@interface TRDOpConfig : NSObject
{
    _Bool _logSwitch;	// 8 = 0x8
    _Bool _logDestroy;	// 9 = 0x9
    _Bool _bLevelAutoFormat;	// 10 = 0xa
    _Bool _bMtopServiceVaild;	// 11 = 0xb
    _Bool _bRuntimeTurnOn;	// 12 = 0xc
    _Bool _proxy;	// 13 = 0xd
    TRDOpSubConfig *_logicConfig;	// 16 = 0x10
    TRDOpSubConfig *_u_f_Config;	// 24 = 0x18
    TRDOpSubConfig *_dataConfig;	// 32 = 0x20
    NSString *_traceId;	// 40 = 0x28
    NSString *_debugId;	// 48 = 0x30
    long long _duration;	// 56 = 0x38
    long long _retryTimes;	// 64 = 0x40
    TRDRTUploadStrategy *_uploadStrategy;	// 72 = 0x48
    NSArray *_filterNetwork;	// 80 = 0x50
    NSString *_rootPath;	// 88 = 0x58
    NSString *_networkType;	// 96 = 0x60
    NSString *_deviceId;	// 104 = 0x68
    NSString *_deviceModule;	// 112 = 0x70
    NSString *_appInfo;	// 120 = 0x78
    NSString *_userNick;	// 128 = 0x80
    NSString *_userId;	// 136 = 0x88
    NSString *_appVersion;	// 144 = 0x90
    NSString *_version;	// 152 = 0x98
    NSString *_appKey;	// 160 = 0xa0
    NSString *_carrier;	// 168 = 0xa8
    NSString *_brand;	// 176 = 0xb0
    NSString *_os;	// 184 = 0xb8
    NSString *_testNick;	// 192 = 0xc0
    NSString *_dumpFilePath;	// 200 = 0xc8
}

+ (id)transferLevelToPrefix:(long long)arg1;
+ (long long)transferLevelStrToEnum:(id)arg1;
@property(retain, nonatomic) NSString *dumpFilePath; // @synthesize dumpFilePath=_dumpFilePath;
@property(retain, nonatomic) NSString *testNick; // @synthesize testNick=_testNick;
@property(nonatomic) _Bool proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) NSString *os; // @synthesize os=_os;
@property(retain, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(retain, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(retain, nonatomic) NSString *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) NSString *deviceModule; // @synthesize deviceModule=_deviceModule;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(retain, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(retain, nonatomic) NSArray *filterNetwork; // @synthesize filterNetwork=_filterNetwork;
@property(retain, nonatomic) TRDRTUploadStrategy *uploadStrategy; // @synthesize uploadStrategy=_uploadStrategy;
@property(nonatomic) long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *debugId; // @synthesize debugId=_debugId;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(nonatomic) _Bool bRuntimeTurnOn; // @synthesize bRuntimeTurnOn=_bRuntimeTurnOn;
@property(retain, nonatomic) TRDOpSubConfig *dataConfig; // @synthesize dataConfig=_dataConfig;
@property(retain, nonatomic) TRDOpSubConfig *u_f_Config; // @synthesize u_f_Config=_u_f_Config;
@property(retain, nonatomic) TRDOpSubConfig *logicConfig; // @synthesize logicConfig=_logicConfig;
@property(nonatomic) _Bool bMtopServiceVaild; // @synthesize bMtopServiceVaild=_bMtopServiceVaild;
@property(nonatomic) _Bool bLevelAutoFormat; // @synthesize bLevelAutoFormat=_bLevelAutoFormat;
@property(nonatomic) _Bool logDestroy; // @synthesize logDestroy=_logDestroy;
@property(nonatomic) _Bool logSwitch; // @synthesize logSwitch=_logSwitch;
- (void).cxx_destruct;
- (id)getTRDConfigForDebug;
- (void)resetRealTimeConfig;
- (void)setTRDConfig:(id)arg1;
- (id)trdRootPath;
- (_Bool)checkRealTimeIsVaild;
- (void)saveConfigToFile;
- (void)initConfigFromFile;
- (void)setConfigInfo:(id)arg1;

@end
