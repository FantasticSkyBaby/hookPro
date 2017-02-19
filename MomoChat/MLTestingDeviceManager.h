//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MLTestingDeviceManager : NSObject
{
    CDUnknownBlockType _testingStatusBlock;
}

+ (id)frontCamera;
+ (id)backCamera;
+ (_Bool)frontCameraAvailable;
+ (_Bool)backCameraAvailable;
+ (id)shareInstance;
@property(copy, nonatomic) CDUnknownBlockType testingStatusBlock; // @synthesize testingStatusBlock=_testingStatusBlock;
- (void).cxx_destruct;
- (void)requestAccessPhotoPermissionSuccess:(CDUnknownBlockType)arg1;
- (void)alertViewType:(long long)arg1;
- (void)testingAccessDevicePermission;
- (_Bool)requestAccessDevice:(id)arg1 deviceType:(long long)arg2;
- (_Bool)isCameraAuthorized;

@end
