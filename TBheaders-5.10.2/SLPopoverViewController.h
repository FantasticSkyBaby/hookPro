//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FPPopoverControllerDelegate-Protocol.h"
#import "SLPopoverItemListViewControllerDelegate-Protocol.h"

@class FPPopoverController, NSArray, NSString, SLPopoverItemListViewController, UIColor, UIFont;
@protocol SLPopoverViewControllerDelegate;

@interface SLPopoverViewController : UIViewController <SLPopoverItemListViewControllerDelegate, FPPopoverControllerDelegate>
{
    _Bool _isArrowCenter;	// 8 = 0x8
    int _arrowDirection;	// 12 = 0xc
    int _tint;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
    SLPopoverItemListViewController *_popoverListController;	// 32 = 0x20
    FPPopoverController *_fpPopoverController;	// 40 = 0x28
    double centerYOffset;	// 48 = 0x30
    id <SLPopoverViewControllerDelegate> _delegate;	// 56 = 0x38
    UIColor *_textColor;	// 64 = 0x40
    UIFont *_font;	// 72 = 0x48
    UIColor *_seperateColor;	// 80 = 0x50
    UIColor *_popBorderColor;	// 88 = 0x58
    struct CGSize _contentSize;	// 96 = 0x60
}

@property(retain, nonatomic) UIColor *popBorderColor; // @synthesize popBorderColor=_popBorderColor;
@property(nonatomic) _Bool isArrowCenter; // @synthesize isArrowCenter=_isArrowCenter;
@property(retain, nonatomic) UIColor *seperateColor; // @synthesize seperateColor=_seperateColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) __weak id <SLPopoverViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double centerYOffset; // @synthesize centerYOffset;
@property(retain, nonatomic) FPPopoverController *fpPopoverController; // @synthesize fpPopoverController=_fpPopoverController;
@property(retain, nonatomic) SLPopoverItemListViewController *popoverListController; // @synthesize popoverListController=_popoverListController;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) int tint; // @synthesize tint=_tint;
@property(nonatomic) int arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)popoverItemList:(id)arg1 didSelectedItem:(id)arg2;
- (void)presentedNewPopoverController:(id)arg1 shouldDismissVisiblePopover:(id)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentPopoverFromPoint:(struct CGPoint)arg1;
- (void)presentPopoverFromView:(id)arg1;
- (void)initControllers;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
