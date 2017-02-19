//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary, NSMutableArray, NSString, UIView;

@interface TBPopLayerTrackingTask : TBJSONModel
{
    _Bool _selectFromCache;	// 8 = 0x8
    _Bool _continuousSelect;	// 9 = 0x9
    NSString *_selector;	// 16 = 0x10
    NSString *_groupId;	// 24 = 0x18
    NSString *_taskHandle;	// 32 = 0x20
    NSDictionary *_operation;	// 40 = 0x28
    NSMutableArray *_currentTrackingViewArray;	// 48 = 0x30
    unsigned long long _totalViewSize;	// 56 = 0x38
    UIView *_popLayerTrackedView;	// 64 = 0x40
}

@property(retain, nonatomic) UIView *popLayerTrackedView; // @synthesize popLayerTrackedView=_popLayerTrackedView;
@property(nonatomic) unsigned long long totalViewSize; // @synthesize totalViewSize=_totalViewSize;
@property(retain, nonatomic) NSMutableArray *currentTrackingViewArray; // @synthesize currentTrackingViewArray=_currentTrackingViewArray;
@property(copy, nonatomic) NSDictionary *operation; // @synthesize operation=_operation;
@property(nonatomic) _Bool continuousSelect; // @synthesize continuousSelect=_continuousSelect;
@property(nonatomic) _Bool selectFromCache; // @synthesize selectFromCache=_selectFromCache;
@property(copy, nonatomic) NSString *taskHandle; // @synthesize taskHandle=_taskHandle;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *selector; // @synthesize selector=_selector;
- (void).cxx_destruct;
- (_Bool)isPopLayerTrackedToView:(id)arg1;
- (id)getTrackingViewTrackToView:(id)arg1;
- (_Bool)isTaskWithOperationName:(id)arg1 andSelector:(id)arg2;
- (_Bool)isTaskWithOperationName:(id)arg1;
- (id)operationName;
- (id)initWithDictionary:(id)arg1;

@end
