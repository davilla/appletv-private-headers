/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class MPRemoteView, NSString, MediaPickerModalContext;

@interface MPMediaPickerControllerServer : NSObject {
	MPRemoteView *_remoteViewForHosting;	// 4 = 0x4
	MediaPickerModalContext *_modalContext;	// 8 = 0x8
	int _mediaTypes;	// 12 = 0xc
	unsigned _replyPort;	// 16 = 0x10
	CFMachPortRef _replyPortRef;	// 20 = 0x14
	NSString *_prompt;	// 24 = 0x18
	unsigned _allowsPickingMultipleItems : 1;	// 28 = 0x1c
	unsigned _wantsNavigationButtons : 1;	// 28 = 0x1c
	unsigned _wantsSheetBarStyle : 1;	// 28 = 0x1c
}
+ (void)_setBarStyle:(int)style;	// 0x3361a1cd
+ (int)barStyle;	// 0x3361a1c1
+ (id)sharedInstance;	// 0x3361a1b5
+ (void)startMediaPickerControllerServer;	// 0x3361a965
- (void)_replyPortInvalidated;	// 0x3361bda5
- (void)_updateBarStyleForViewControllers;	// 0x3361c9d9
- (void)cancel;	// 0x3361c0f1
- (unsigned)createRemoteViewForHosting;	// 0x3361c8e9
- (void)dealloc;	// 0x3361bde1
- (void)didPickMediaItems:(id)items;	// 0x3361c109
- (void)mediaPickerModalContext:(id)context didPickMediaItems:(id)items;	// 0x3361a531
- (void)modalContextDidDismiss:(id)modalContext withSuccess:(BOOL)success;	// 0x3361a549
- (void)orderFront;	// 0x3361a855
- (void)orderOut;	// 0x3361a83d
- (void)orderOutAndFence:(BOOL)fence;	// 0x3361a739
- (void)prepareToOrderFront;	// 0x3361beb1
- (void)releaseRemoteView;	// 0x3361a691
- (void)runMigServer;	// 0x3361c169
- (void)scrollToTop;	// 0x3361a565
- (void)setAllowsPickingMultipleItems:(BOOL)items;	// 0x3361a1e9
- (void)setMediaTypes:(int)types;	// 0x3361a1d9
- (void)setPrompt:(id)prompt;	// 0x3361a641
- (void)setReplyPort:(unsigned)port;	// 0x3361c1ad
- (void)setSize:(CGSize)size;	// 0x3361b5f1
- (void)setWantsNavigationButtons:(BOOL)buttons;	// 0x3361a5f5
- (void)setWantsSheetBarStyle:(BOOL)style;	// 0x3361a585
@end

