//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIScrollView;

@protocol SearchHistoryViewDelegate <NSObject>
- (void)historyTableViwDidScroll:(UIScrollView *)arg1;
- (void)keywordSelected:(NSString *)arg1 forSearchType:(int)arg2 forSearchCid:(NSString *)arg3;
@end
