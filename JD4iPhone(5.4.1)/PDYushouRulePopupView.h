//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDPopupView.h"

#import "PDViewProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, NewProductModel, UIButton, UILabel, UITableView;

@interface PDYushouRulePopupView : PDPopupView <UITableViewDelegate, UITableViewDataSource, PDViewProtocol>
{
    unsigned long long _type;
    UILabel *_titleLabel;
    UITableView *_contentView;
    UIButton *_confirmButton;
    NSArray *_data;
    NewProductModel *_model;
}

@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UITableView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)confirmButtonTapped:(id)arg1;
- (void)renderUIWithProductModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
