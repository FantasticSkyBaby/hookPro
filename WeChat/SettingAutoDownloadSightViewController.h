//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMTableViewInfo;

@interface SettingAutoDownloadSightViewController : MMUIViewController
{
    MMTableViewInfo *m_tableViewInfo;
    unsigned int curImgSettingValue;
    unsigned int curSightSettingValue;
}

- (void).cxx_destruct;
- (void)onSwitchAutoSave:(id)arg1;
- (void)onSelectSightCell:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadTableData;
- (id)init;

@end
