/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "ATVAPNetworkSelectionDelegate.h"

@protocol LTWirelessSetupResultDelegate;

__attribute__((visibility("hidden")))
@interface LTWirelessSetupController : BRViewController <ATVAPNetworkSelectionDelegate> {
	id<LTWirelessSetupResultDelegate> _delegate;	// 100 = 0x64
	BOOL _didJoinNetwork;	// 104 = 0x68
}
@property(assign) id delegate;	// G=0x17c15; S=0x17bd1; converted property
- (id)init;	// 0x17b85
- (void).cxx_destruct;	// 0x17ec1
- (void)_showNetworkMenu;	// 0x17ed5
// converted property getter: - (id)delegate;	// 0x17c15
- (void)network:(id)network wasSelected:(BOOL)selected;	// 0x17d45
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x17bd1
- (void)wasExhumed;	// 0x17c95
- (void)wasPopped;	// 0x17c69
- (void)wasPushed;	// 0x17c29
@end

