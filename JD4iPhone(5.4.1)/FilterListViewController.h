//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "ExposedTableViewCellDelegate.h"
#import "FilterSelectCellDelegate.h"
#import "NewFiltreAddressViewControllerDelegate.h"
#import "PriceFilterTableViewCellDelegate.h"
#import "ServiceFilterTableViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ExposedTableViewCell, FilterService, JDButton, NSString, PriceFilterTableViewCell, ServiceFilterTableViewCell, UITableView;

@interface FilterListViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, NewFiltreAddressViewControllerDelegate, FilterSelectCellDelegate, ExposedTableViewCellDelegate, ServiceFilterTableViewCellDelegate, PriceFilterTableViewCellDelegate>
{
    _Bool hasAllExpandData_;
    _Bool _requestDataAgain;
    id delegate_;
    _Bool _isFilterWorldBuy;
    UITableView *myTableView_;
    ServiceFilterTableViewCell *_commonFiltercell;
    PriceFilterTableViewCell *_priceFilterCell;
    ExposedTableViewCell *_exposedFiltercell;
    JDButton *resetButton;
    JDButton *commitButton;
    id _tmpeComponents;
    _Bool _isFromSearchVC;
    _Bool _isFromChannelWorldBuy;
    _Bool _needHiddenAllCategory;
    _Bool _worldBuyButtonIsHidden;
    int _sourceType;
    int _inlet;
    FilterService *_filterSV;
    NSString *_maidianStr;
    NSString *_addressNumStr;
    NSString *_addressStr;
    NSString *_activityId;
}

@property(retain, nonatomic) id tmpeComponents; // @synthesize tmpeComponents=_tmpeComponents;
@property(nonatomic) _Bool worldBuyButtonIsHidden; // @synthesize worldBuyButtonIsHidden=_worldBuyButtonIsHidden;
@property(nonatomic) _Bool needHiddenAllCategory; // @synthesize needHiddenAllCategory=_needHiddenAllCategory;
@property(nonatomic) _Bool isFromChannelWorldBuy; // @synthesize isFromChannelWorldBuy=_isFromChannelWorldBuy;
@property(nonatomic) _Bool isFilterWorldBuy; // @synthesize isFilterWorldBuy=_isFilterWorldBuy;
@property(nonatomic) int inlet; // @synthesize inlet=_inlet;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *addressStr; // @synthesize addressStr=_addressStr;
@property(copy, nonatomic) NSString *addressNumStr; // @synthesize addressNumStr=_addressNumStr;
@property(copy, nonatomic) NSString *maidianStr; // @synthesize maidianStr=_maidianStr;
@property(nonatomic) _Bool isFromSearchVC; // @synthesize isFromSearchVC=_isFromSearchVC;
@property(retain, nonatomic) FilterService *filterSV; // @synthesize filterSV=_filterSV;
@property(nonatomic) __weak id <FilterListViewControllerDelegate> delegate; // @synthesize delegate=delegate_;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)hideKeyboard;
- (void)priceFilterTableViewCell:(id)arg1 scrollFeildToTop:(_Bool)arg2;
- (void)addressLabelTap:(id)arg1;
- (void)allBrandBtnClick:(id)arg1 withIndex:(long long)arg2;
- (void)saveFilterData:(id)arg1 withData:(id)arg2 index:(long long)arg3;
- (void)updateTableListData:(id)arg1 withIndex:(id)arg2 isOpen:(_Bool)arg3;
- (void)confirmFilteNeedAnimation:(_Bool)arg1;
- (void)confirmFilte;
- (void)updataJDPeiSong:(id)arg1 withModel:(id)arg2;
- (void)requestNewFilterDataWithFunctionId:(id)arg1 popBack:(_Bool)arg2;
- (id)gennerOtherData;
- (id)gennerateSearchFilterDataWithHotTags:(id)arg1;
- (id)newGennerateCategoryFilterData;
- (void)loadAddressInfo:(id)arg1;
- (void)filterLoadAddress;
- (void)catelogyFilterInfo:(id)arg1 UserInfo:(id)arg2;
- (void)searchFilterInfo:(id)arg1 UserInfo:(id)arg2;
- (void)exportFitleData:(id)arg1 comfrom:(id)arg2;
- (void)didSelectFilterDetailAtIndexPath:(id)arg1 withDataIndexArray:(id)arg2 fetchData:(_Bool)arg3 fromWordSort:(_Bool)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)justPopBack;
- (void)cancelComSel;
- (void)backSelectedFromComsel;
- (void)tapClearBtn;
- (void)cleanDataList;
- (void)switchChangeIsOn:(_Bool)arg1 cellTitleName:(id)arg2;
- (void)finishSelectAddress:(id)arg1 withAddressStr:(id)arg2 numStr:(id)arg3;
- (id)returnSelectedCellString:(id)arg1;
- (id)createFilterModel;
- (id)createFilterModelWithKey:(id)arg1 dict:(id)arg2 mutiSelected:(_Bool)arg3;
- (id)returnListedDataWithDic:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)closeJinKanYouHuoBtn:(_Bool)arg1;
- (void)clearInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
