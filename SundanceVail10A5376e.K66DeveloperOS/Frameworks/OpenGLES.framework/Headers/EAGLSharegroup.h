/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
 */

#import "OpenGLES-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface EAGLSharegroup : NSObject {
	EAGLSharegroupPrivate *_private;	// 4 = 0x4
	NSString *debugLabel;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *debugLabel;	// G=0x30f867b9; S=0x30f867cd; @synthesize
- (id)init;	// 0x30f865f9
- (id)initWithAPI:(unsigned)api;	// 0x30f865fd
- (id)initWithAPI:(unsigned)api sharedWithCompute:(BOOL)compute;	// 0x30f86611
- (unsigned)APIs;	// 0x30f86791
- (void)dealloc;	// 0x30f866fd
// declared property getter: - (id)debugLabel;	// 0x30f867b9
- (GLISharedRecRef)getGLIShared;	// 0x30f867a5
- (void)loadGLIPlugin:(GLDPixelFormatRec *)plugin sharedWithCompute:(BOOL)compute;	// 0x30f86565
// declared property setter: - (void)setDebugLabel:(id)label;	// 0x30f867cd
@end

