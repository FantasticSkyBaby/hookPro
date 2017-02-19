//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class BakChatUploadMediaPackageStruct, ChatMigrationBackupChatFileHelper, NSObject<OS_dispatch_queue>, NSString, PacketBackupDataResponse;

@interface ChatMigrationBackupChatLogic : MMObject
{
    ChatMigrationBackupChatFileHelper *m_BakChatFileHelper;
    BakChatUploadMediaPackageStruct *m_LastMediaPkg;
    int iLastMediaPkgEndOffset;
    PacketBackupDataResponse *mLastResponse;
    NSString *nsLastDataId;
    NSObject<OS_dispatch_queue> *m_GetDataPushQueue;
    _Bool m_GetDataFinished;
    _Bool m_bGetNextPieceOfData;
    unsigned int m_fileCountTransfered;
    id <ChatMigrationBackupChatLogicDelegate> m_delegate;
}

@property(nonatomic) __weak id <ChatMigrationBackupChatLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (id)getBackupDataPushPkgFromMediaStruct:(id)arg1 andDataID:(id)arg2 withOffset:(unsigned int)arg3;
- (id)getBackupDataPushPkgFromMsgRequst:(id)arg1 andDataID:(id)arg2;
- (id)p_getNextPieceOfData:(id)arg1;
- (void)getNextPieceOfData;
- (void)stopGetNextPieceOfData;
- (void)startGetNextPieceOfData;
- (id)getDicOfBackupReportInfo;
- (void)dealloc;
- (id)initWithUserName:(id)arg1 withBackChatDB:(id)arg2;
- (id)init;

@end
