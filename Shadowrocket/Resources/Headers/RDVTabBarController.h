//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "RDVTabBarDelegate-Protocol.h"

@class NSArray, NSString, RDVTabBar, UIView;
@protocol RDVTabBarControllerDelegate;

@interface RDVTabBarController : UIViewController <RDVTabBarDelegate>
{
    UIView *_contentView;
    _Bool _tabBarHidden;
    id <RDVTabBarControllerDelegate> _delegate;
    NSArray *_viewControllers;
    UIViewController *_selectedViewController;
    unsigned long long _selectedIndex;
    RDVTabBar *_tabBar;
}

@property(retain, nonatomic) RDVTabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(nonatomic, getter=isTabBarHidden) _Bool tabBarHidden; // @synthesize tabBarHidden=_tabBarHidden;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak UIViewController *selectedViewController; // @synthesize selectedViewController=_selectedViewController;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) __weak id <RDVTabBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tabBar:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (_Bool)tabBar:(id)arg1 shouldSelectItemAtIndex:(long long)arg2;
- (void)setTabBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (id)contentView;
- (long long)indexForViewController:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

