//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "WCBizTipViewDelegate-Protocol.h"

@class NSString, RichTextView, UIButton, UILabel, WCBaseTextFieldItem, WCBizInfoGroup, WCBizTipView, WCPayCVVItem, WCPayPhoneTextItem, WCPayValidDateItem;
@protocol WCPayResetBalanceTelephoneViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WCPayResetBalanceTelephoneViewController : WCPayBaseViewController <ILinkEventExt, WCBizTipViewDelegate>
{
    UIButton *m_footerButton;
    WCBizInfoGroup *m_group;
    WCPayPhoneTextItem *m_textFieldItem;
    WCPayValidDateItem *m_pikerValidDateItem;
    WCPayCVVItem *m_textFieldCVVItem;
    WCBaseTextFieldItem *m_textAutoFilledCardNumberItem;
    RichTextView *richTextView;
    id <WCPayResetBalanceTelephoneViewControllerDelegate> m_delegate;
    WCBizTipView *introView;
    _Bool m_bAutoFilledCardNumber;
    _Bool m_bShowedFavorInfo;
    NSString *m_headerTitle;
    UILabel *autoFilledNumberLabel;
    NSString *m_viewTitle;
}

@property(readonly, nonatomic) _Bool m_bAutoFilledCardNumber; // @synthesize m_bAutoFilledCardNumber;
- (void).cxx_destruct;
- (void)footerTipAction:(id)arg1;
- (void)setAutoFilledCardNumber;
- (void)OnWCBizTipViewClosed;
- (void)showDetailTip;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)stopLogicLoading;
- (void)startLogicLoading;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)OnClearAutoFilledCardNumber;
- (void)CheckData;
- (void)onNext;
- (void)scanAction:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)FillCardNumberCancel;
- (void)setShowedFavorInfo;
- (void)initFooterView;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)setHeaderTip:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
