/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSDictionary, NSTimer;
@protocol BRProvider, BRCyclerDataSource, BRCyclerDelegate;

@interface BRCyclerControl : BRControl {
@private
	id<BRProvider> _provider;	// 44 = 0x2c
	double _interval;	// 48 = 0x30
	double _startInterval;	// 56 = 0x38
	long _index;	// 64 = 0x40
	long _startIndex;	// 68 = 0x44
	BOOL _returnsToStart;	// 72 = 0x48
	NSTimer *_crossFadeTimer;	// 76 = 0x4c
	BRControl *_control;	// 80 = 0x50
	NSDictionary *_subcontrolMetadata;	// 84 = 0x54
	BOOL _initialDisplayOccurred;	// 88 = 0x58
	id<BRCyclerDataSource> _dataSource;	// 92 = 0x5c
	id<BRCyclerDelegate> _delegate;	// 96 = 0x60
	BOOL _startsOnActivate;	// 100 = 0x64
}
@property(assign, nonatomic) id<BRCyclerDataSource> dataSource;	// G=0x32fe2fe9; S=0x32fe2ff9; @synthesize=_dataSource
@property(assign, nonatomic) id<BRCyclerDelegate> delegate;	// G=0x32fe2fc9; S=0x32fe2fd9; @synthesize=_delegate
@property(assign) double interval;	// G=0x32fe2f65; S=0x32fe35ad; converted property
@property(assign) BOOL returnsToStart;	// G=0x32fe2f55; S=0x32fe2f45; converted property
@property(assign) long startIndex;	// G=0x32fe2f35; S=0x32fe2f0d; converted property
@property(assign) double startInterval;	// G=0x32fe2f89; S=0x32fe2f75; converted property
@property(assign, nonatomic) BOOL startsOnActivate;	// G=0x32fe2fa9; S=0x32fe2fb9; @synthesize=_startsOnActivate
@property(readonly, retain) NSDictionary *subcontrolMetadata;	// G=0x32fe2f99; converted property
+ (id)cyclerWithProvider:(id)provider;	// 0x32fe3929
- (id)init;	// 0x32fe38e9
- (id)initWithProvider:(id)provider;	// 0x32fe3825
- (void)_commonInit;	// 0x32fe3009
- (void)_crossFade:(id)fade;	// 0x32fe3175
- (void)_providerUpdated:(id)updated;	// 0x32fe3445
- (void)_returnToStart;	// 0x32fe3051
- (void)_startCrossFadeTimer;	// 0x32fe30c5
- (void)_stopCrossFadeTimer;	// 0x32fe3099
- (id)accessibilityLabel;	// 0x32fe39c5
- (void)controlWasActivated;	// 0x32fe3721
- (void)controlWasDeactivated;	// 0x32fe36d5
- (void)controlWasFocused;	// 0x32fe3699
- (void)controlWasUnfocused;	// 0x32fe364d
- (void)cycle;	// 0x32fe3621
// declared property getter: - (id)dataSource;	// 0x32fe2fe9
- (void)dealloc;	// 0x32fe3791
// declared property getter: - (id)delegate;	// 0x32fe2fc9
// converted property getter: - (double)interval;	// 0x32fe2f65
- (void)layoutSubcontrols;	// 0x32fe3969
- (id)preferredActionForKey:(id)key;	// 0x32fe346d
- (void)reload;	// 0x32fe2ef1
// converted property getter: - (BOOL)returnsToStart;	// 0x32fe2f55
// declared property setter: - (void)setDataSource:(id)source;	// 0x32fe2ff9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32fe2fd9
// converted property setter: - (void)setInterval:(double)interval;	// 0x32fe35ad
// converted property setter: - (void)setReturnsToStart:(BOOL)start;	// 0x32fe2f45
// converted property setter: - (void)setStartIndex:(long)index;	// 0x32fe2f0d
// converted property setter: - (void)setStartInterval:(double)interval;	// 0x32fe2f75
// declared property setter: - (void)setStartsOnActivate:(BOOL)activate;	// 0x32fe2fb9
- (void)setSubcontrolMetaData:(id)data;	// 0x32fe3575
- (void)start;	// 0x32fe3639
// converted property getter: - (long)startIndex;	// 0x32fe2f35
// converted property getter: - (double)startInterval;	// 0x32fe2f89
// declared property getter: - (BOOL)startsOnActivate;	// 0x32fe2fa9
// converted property getter: - (id)subcontrolMetadata;	// 0x32fe2f99
@end

