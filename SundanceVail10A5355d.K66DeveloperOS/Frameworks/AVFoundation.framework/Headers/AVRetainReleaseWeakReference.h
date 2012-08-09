/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVWeakReference.h"

@class NSString;

@interface AVRetainReleaseWeakReference : AVWeakReference {
	NSString *_cachedReferencedObjectDescription;	// 4 = 0x4
	id _weakStorage;	// 8 = 0x8
}
- (id)init;	// 0x326d0bc9
- (id)initWithReferencedObject:(id)referencedObject;	// 0x326d0a8d
- (void)dealloc;	// 0x326d0bdd
- (id)description;	// 0x326d0c3d
- (id)referencedObject;	// 0x326d0c9d
@end
