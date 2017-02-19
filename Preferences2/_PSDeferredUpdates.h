//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, PSSpecifierUpdates;

@interface _PSDeferredUpdates : NSObject
{
    BOOL _invalidatedSpecifiers;
    NSMutableSet *_searchEntries;
    PSSpecifierUpdates *_specifierUpdates;
}

+ (id)deferredInvalidationUpdatesWithEntries:(id)arg1;
+ (id)deferredUpdatesWithEntries:(id)arg1 specifierUpdates:(id)arg2;
@property(nonatomic) BOOL invalidatedSpecifiers; // @synthesize invalidatedSpecifiers=_invalidatedSpecifiers;
@property(retain, nonatomic) PSSpecifierUpdates *specifierUpdates; // @synthesize specifierUpdates=_specifierUpdates;
@property(retain, nonatomic) NSMutableSet *searchEntries; // @synthesize searchEntries=_searchEntries;
- (id)initWithSearchEntries:(id)arg1 specifierUpdates:(id)arg2 invalidatedSpecifiers:(BOOL)arg3;
- (void)dealloc;

@end
