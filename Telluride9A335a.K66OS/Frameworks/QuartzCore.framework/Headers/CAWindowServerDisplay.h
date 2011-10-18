/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSSet;

@interface CAWindowServerDisplay : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(copy) NSString *TVMode;	// G=0x33640159; S=0x33640911; 
@property(copy) NSString *TVSignalType;	// G=0x33640195; S=0x33640869; 
@property(assign) BOOL allowsVirtualModes;	// G=0x3364011d; S=0x336409a1; 
@property(assign, getter=isBlanked) BOOL blanked;	// G=0x3363ff8d; S=0x33640c41; 
@property(readonly, assign) CGRect bounds;	// G=0x33641551; 
@property(readonly, assign) CAWindowServerDisplay *cloneMaster;	// G=0x33640c69; 
@property(readonly, assign) NSSet *clones;	// G=0x3364115d; 
@property(copy, nonatomic) NSString *colorMode;	// G=0x336400c5; S=0x336409c9; 
@property(assign) float contrast;	// G=0x3363fff9; S=0x33640add; 
@property(readonly, assign) NSString *deviceName;	// G=0x3363ff2d; 
@property(readonly, assign) unsigned displayId;	// G=0x3363ff49; 
@property(assign) float idealRefreshRate;	// G=0x3364007d; S=0x33640a7d; 
@property(assign) BOOL invertsColors;	// G=0x3363ffd5; S=0x33640afd; 
@property(assign) float maximumRefreshRate;	// G=0x33640055; S=0x33640a9d; 
@property(assign) float minimumRefreshRate;	// G=0x3364002d; S=0x33640abd; 
@property(assign, getter=isMirroringEnabled) BOOL mirroringEnabled;	// G=0x33640789; S=0x3364076d; 
@property(readonly, assign) NSString *name;	// G=0x3363ff15; 
@property(copy) NSString *orientation;	// G=0x33640b45; S=0x33640ba9; 
@property(assign) float overscanAmount;	// G=0x3363ffad; S=0x33640b25; 
@property(readonly, assign) unsigned rendererFlags;	// G=0x3363ff65; 
@property(assign) int tag;	// G=0x3364013d; S=0x3364097d; 
@property(assign) BOOL usesPreferredModeRefreshRate;	// G=0x336400a5; S=0x33640a55; 
// declared property getter: - (id)TVMode;	// 0x33640159
// declared property getter: - (id)TVSignalType;	// 0x33640195
- (id)_initWithCADisplayServer:(Server *)cadisplayServer;	// 0x336407ad
- (void)addClone:(id)clone;	// 0x33640759
- (void)addClone:(id)clone options:(id)options;	// 0x33640f0d
// declared property getter: - (BOOL)allowsVirtualModes;	// 0x3364011d
// declared property getter: - (CGRect)bounds;	// 0x33641551
- (unsigned)clientPortAtPosition:(CGPoint)position;	// 0x33596ca1
- (unsigned)clientPortOfContextId:(unsigned)contextId;	// 0x33641479
// declared property getter: - (id)cloneMaster;	// 0x33640c69
// declared property getter: - (id)clones;	// 0x3364115d
// declared property getter: - (id)colorMode;	// 0x336400c5
- (unsigned)contextIdAtPosition:(CGPoint)position;	// 0x335901f1
- (unsigned)contextIdHostingContextId:(unsigned)anId;	// 0x3364143d
- (id)contextIdsWithClientPort:(unsigned)clientPort;	// 0x336414a9
// declared property getter: - (float)contrast;	// 0x3363fff9
- (CGPoint)convertPoint:(CGPoint)point fromContextId:(unsigned)contextId;	// 0x336412cd
- (CGPoint)convertPoint:(CGPoint)point toContextId:(unsigned)contextId;	// 0x33596cd9
- (void)dealloc;	// 0x336415f1
- (id)description;	// 0x336407f1
// declared property getter: - (id)deviceName;	// 0x3363ff2d
// declared property getter: - (unsigned)displayId;	// 0x3363ff49
- (CGRect)frameOfContextId:(unsigned)contextId;	// 0x33641309
// declared property getter: - (float)idealRefreshRate;	// 0x3364007d
- (void)invalidate;	// 0x3363fedd
// declared property getter: - (BOOL)invertsColors;	// 0x3363ffd5
// declared property getter: - (BOOL)isBlanked;	// 0x3363ff8d
// declared property getter: - (BOOL)isMirroringEnabled;	// 0x33640789
// declared property getter: - (float)maximumRefreshRate;	// 0x33640055
// declared property getter: - (float)minimumRefreshRate;	// 0x3364002d
// declared property getter: - (id)name;	// 0x3363ff15
// declared property getter: - (id)orientation;	// 0x33640b45
// declared property getter: - (float)overscanAmount;	// 0x3363ffad
- (void)removeAllClones;	// 0x33640c91
- (void)removeClone:(id)clone;	// 0x33640e35
// declared property getter: - (unsigned)rendererFlags;	// 0x3363ff65
// declared property setter: - (void)setAllowsVirtualModes:(BOOL)modes;	// 0x336409a1
// declared property setter: - (void)setBlanked:(BOOL)blanked;	// 0x33640c41
// declared property setter: - (void)setColorMode:(id)mode;	// 0x336409c9
// declared property setter: - (void)setContrast:(float)contrast;	// 0x33640add
// declared property setter: - (void)setIdealRefreshRate:(float)rate;	// 0x33640a7d
// declared property setter: - (void)setInvertsColors:(BOOL)colors;	// 0x33640afd
// declared property setter: - (void)setMaximumRefreshRate:(float)rate;	// 0x33640a9d
// declared property setter: - (void)setMinimumRefreshRate:(float)rate;	// 0x33640abd
// declared property setter: - (void)setMirroringEnabled:(BOOL)enabled;	// 0x3364076d
// declared property setter: - (void)setOrientation:(id)orientation;	// 0x33640ba9
// declared property setter: - (void)setOverscanAmount:(float)amount;	// 0x33640b25
// declared property setter: - (void)setTVMode:(id)mode;	// 0x33640911
// declared property setter: - (void)setTVSignalType:(id)type;	// 0x33640869
// declared property setter: - (void)setTag:(int)tag;	// 0x3364097d
// declared property setter: - (void)setUsesPreferredModeRefreshRate:(BOOL)rate;	// 0x33640a55
// declared property getter: - (int)tag;	// 0x3364013d
// declared property getter: - (BOOL)usesPreferredModeRefreshRate;	// 0x336400a5
@end

