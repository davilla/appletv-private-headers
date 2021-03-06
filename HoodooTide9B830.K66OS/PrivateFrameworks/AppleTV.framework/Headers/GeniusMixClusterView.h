/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRReflectionControl, NSMutableArray, NSString, NSMutableDictionary, BRImageControl;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface GeniusMixClusterView : BRControl {
@private
	id<BRImageProxy> _geniusMixCollectionProxy;	// 48 = 0x30
	NSMutableArray *_imageProxies;	// 52 = 0x34
	NSMutableArray *_imageIDs;	// 56 = 0x38
	NSMutableDictionary *_geniusMixImages;	// 60 = 0x3c
	unsigned _pendingRequestCount;	// 64 = 0x40
	BOOL _needToRestartImageRequest;	// 68 = 0x44
	BRImageControl *_defaultImageControl;	// 72 = 0x48
	BRReflectionControl *_reflectionControl;	// 76 = 0x4c
	BRImageControl *_playImageControl;	// 80 = 0x50
	NSString *_geniusMixName;	// 84 = 0x54
	NSString *_geniusMixBasedOnArtists;	// 88 = 0x58
}
@property(retain, nonatomic) NSString *geniusMixBasedOnArtists;	// G=0x32af071d; S=0x32af072d; @synthesize=_geniusMixBasedOnArtists
@property(retain, nonatomic) NSString *geniusMixName;	// G=0x32af06e9; S=0x32af06f9; @synthesize=_geniusMixName
+ (id)clusterControlWithGeniusMix:(ATVMediaCollectionRef)geniusMix;	// 0x32aeed95
- (id)initWithGeniusMix:(ATVMediaCollectionRef)geniusMix;	// 0x32aeede1
- (void)_generateGeniusMixClusterImage;	// 0x32aefc9d
- (void)_imageUnavailable:(id)unavailable;	// 0x32af0485
- (void)_imageUpdated:(id)updated;	// 0x32af0185
- (id)_loadArtwork;	// 0x32aef8b1
- (void)_setImageControlFrames;	// 0x32af0631
- (id)accessibilityLabel;	// 0x32aef875
- (void)controlWasActivated;	// 0x32aef559
- (void)controlWasDeactivated;	// 0x32aef5ad
- (void)controlWasFocused;	// 0x32aef48d
- (void)controlWasUnfocused;	// 0x32aef4f5
- (void)dealloc;	// 0x32aef309
- (CGRect)focusCursorFrame;	// 0x32aef6a1
// declared property getter: - (id)geniusMixBasedOnArtists;	// 0x32af071d
// declared property getter: - (id)geniusMixName;	// 0x32af06e9
- (BOOL)isAccessibilityElement;	// 0x32aef871
- (void)layoutSubcontrols;	// 0x32aef73d
// declared property setter: - (void)setGeniusMixBasedOnArtists:(id)artists;	// 0x32af072d
// declared property setter: - (void)setGeniusMixName:(id)name;	// 0x32af06f9
@end

