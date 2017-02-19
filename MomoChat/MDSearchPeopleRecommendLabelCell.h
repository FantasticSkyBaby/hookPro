//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "TableBindViewDelegate.h"

@class NSString, UILabel;

@interface MDSearchPeopleRecommendLabelCell : UITableViewCell <TableBindViewDelegate>
{
    UILabel *_fistLineLabel;
    UILabel *_secondLineLabel;
}

@property(retain, nonatomic) UILabel *secondLineLabel; // @synthesize secondLineLabel=_secondLineLabel;
@property(retain, nonatomic) UILabel *fistLineLabel; // @synthesize fistLineLabel=_fistLineLabel;
- (void).cxx_destruct;
- (void)testLog;
- (void)bindModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
