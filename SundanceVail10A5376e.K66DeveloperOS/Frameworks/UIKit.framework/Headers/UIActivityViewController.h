/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class NSArray, UIActivity, NSOperationQueue, UIActivityListViewController, NSString;

@interface UIActivityViewController : UIViewController {
	NSArray *_activityItems;	// 196 = 0xc4
	NSArray *_applicationActivities;	// 200 = 0xc8
	UIActivityListViewController *_activityListViewController;	// 204 = 0xcc
	int _totalProviderCount;	// 208 = 0xd0
	UIActivity *_activity;	// 212 = 0xd4
	NSArray *_excludedActivityTypes;	// 216 = 0xd8
	NSOperationQueue *_activityItemProviderOperationQueue;	// 220 = 0xdc
	unsigned _backgroundTaskIdentifier;	// 224 = 0xe0
	id _completionHandler;	// 228 = 0xe4
	NSString *_subject;	// 232 = 0xe8
	int _completedProviderCount;	// 236 = 0xec
	Class _originalPopoverBackgroundViewClass;	// 240 = 0xf0
	int _originalPopoverBackgroundStyle;	// 244 = 0xf4
	BOOL _useBlackPopoverStyle;	// 248 = 0xf8
}
@property(retain, nonatomic) UIActivity *activity;	// G=0x303b924d; S=0x303ad58d; @synthesize=_activity
@property(retain, nonatomic) NSOperationQueue *activityItemProviderOperationQueue;	// G=0x306617d1; S=0x303ad729; @synthesize=_activityItemProviderOperationQueue
@property(copy, nonatomic) NSArray *activityItems;	// G=0x30661765; S=0x303a67b1; @synthesize=_activityItems
@property(retain, nonatomic) UIActivityListViewController *activityListViewController;	// G=0x3066178d; S=0x303b95e5; @synthesize=_activityListViewController
@property(copy, nonatomic) NSArray *applicationActivities;	// G=0x30661779; S=0x303a67c5; @synthesize=_applicationActivities
@property(assign, nonatomic) unsigned backgroundTaskIdentifier;	// G=0x306617e1; S=0x303a67d9; @synthesize=_backgroundTaskIdentifier
@property(assign, nonatomic) int completedProviderCount;	// G=0x30661829; S=0x30661839; @synthesize=_completedProviderCount
@property(copy, nonatomic) id completionHandler;	// G=0x306617f1; S=0x303a67ed; @synthesize=_completionHandler
@property(copy, nonatomic) NSArray *excludedActivityTypes;	// G=0x303a7c35; S=0x306617c1; @synthesize=_excludedActivityTypes
@property(assign, nonatomic) int originalPopoverBackgroundStyle;	// G=0x30661869; S=0x30661879; @synthesize=_originalPopoverBackgroundStyle
@property(assign, nonatomic) Class originalPopoverBackgroundViewClass;	// G=0x30661849; S=0x30661859; @synthesize=_originalPopoverBackgroundViewClass
@property(copy, nonatomic) NSString *subject;	// G=0x30661805; S=0x30661819; @synthesize=_subject
@property(assign, nonatomic) int totalProviderCount;	// G=0x3066179d; S=0x306617ad; @synthesize=_totalProviderCount
@property(assign, nonatomic) BOOL useBlackPopoverStyle;	// G=0x30661889; S=0x30661899; @synthesize=_useBlackPopoverStyle
+ (id)_builtinActivities;	// 0x303a7b71
+ (BOOL)_hasSystemActivityForActivityItems:(id)activityItems;	// 0x30660b71
- (id)initWithActivityItems:(id)activityItems applicationActivities:(id)activities;	// 0x303a66b5
- (id)_activityItemValues;	// 0x303a7021
- (id)_availableActivities;	// 0x303a6931
- (void)_cancel;	// 0x306616c9
- (void)_cleanupActivityWithSuccess:(BOOL)success;	// 0x303b8ce9
- (void)_didResignContentViewControllerOfPopover:(id)popover;	// 0x30661639
- (void)_executeActivity;	// 0x303ad7a1
- (void)_hideView;	// 0x303b888d
- (void)_performActivity:(id)activity;	// 0x303ad21d
- (void)_prepareActivity:(id)activity;	// 0x303aed09
- (void)_reloadImageForActivity:(id)activity;	// 0x30661481
- (void)_setPopoverController:(id)controller;	// 0x306614f1
- (BOOL)_shouldShowSystemActivity:(id)activity;	// 0x30660da5
- (id)_titleForActivity:(id)activity;	// 0x303a8a95
// declared property getter: - (id)activity;	// 0x303b924d
// declared property getter: - (id)activityItemProviderOperationQueue;	// 0x306617d1
// declared property getter: - (id)activityItems;	// 0x30661765
// declared property getter: - (id)activityListViewController;	// 0x3066178d
// declared property getter: - (id)applicationActivities;	// 0x30661779
// declared property getter: - (unsigned)backgroundTaskIdentifier;	// 0x306617e1
// declared property getter: - (int)completedProviderCount;	// 0x30661829
// declared property getter: - (id)completionHandler;	// 0x306617f1
- (CGSize)contentSizeForViewInPopover;	// 0x30660e1d
- (void)dealloc;	// 0x303b942d
// declared property getter: - (id)excludedActivityTypes;	// 0x303a7c35
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x303ad659
// declared property getter: - (int)originalPopoverBackgroundStyle;	// 0x30661869
// declared property getter: - (Class)originalPopoverBackgroundViewClass;	// 0x30661849
// declared property setter: - (void)setActivity:(id)activity;	// 0x303ad58d
// declared property setter: - (void)setActivityItemProviderOperationQueue:(id)queue;	// 0x303ad729
// declared property setter: - (void)setActivityItems:(id)items;	// 0x303a67b1
// declared property setter: - (void)setActivityListViewController:(id)controller;	// 0x303b95e5
// declared property setter: - (void)setApplicationActivities:(id)activities;	// 0x303a67c5
// declared property setter: - (void)setBackgroundTaskIdentifier:(unsigned)identifier;	// 0x303a67d9
// declared property setter: - (void)setCompletedProviderCount:(int)count;	// 0x30661839
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x303a67ed
// declared property setter: - (void)setExcludedActivityTypes:(id)types;	// 0x306617c1
// declared property setter: - (void)setOriginalPopoverBackgroundStyle:(int)style;	// 0x30661879
// declared property setter: - (void)setOriginalPopoverBackgroundViewClass:(Class)aClass;	// 0x30661859
// declared property setter: - (void)setSubject:(id)subject;	// 0x30661819
// declared property setter: - (void)setTotalProviderCount:(int)count;	// 0x306617ad
// declared property setter: - (void)setUseBlackPopoverStyle:(BOOL)style;	// 0x30661899
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30660dd5
// declared property getter: - (id)subject;	// 0x30661805
- (unsigned)supportedInterfaceOrientations;	// 0x30660da9
// declared property getter: - (int)totalProviderCount;	// 0x3066179d
// declared property getter: - (BOOL)useBlackPopoverStyle;	// 0x30661889
- (void)viewDidAppear:(BOOL)view;	// 0x303acfcd
- (void)viewDidLoad;	// 0x303a6801
- (void)viewWillAppear:(BOOL)view;	// 0x303ac099
- (void)viewWillDisappear:(BOOL)view;	// 0x303b9059
@end
