/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionExportInfo : NSObject {
	id _exportedObject;	// 4 = 0x4
	NSXPCInterface *_exportedInterface;	// 8 = 0x8
}
@property(retain) NSXPCInterface *exportedInterface;	// G=0x37466941; S=0x37466955; @synthesize=_exportedInterface
@property(retain) id exportedObject;	// G=0x3746691d; S=0x37466931; @synthesize=_exportedObject
- (void)dealloc;	// 0x374668b9
// declared property getter: - (id)exportedInterface;	// 0x37466941
// declared property getter: - (id)exportedObject;	// 0x3746691d
// declared property setter: - (void)setExportedInterface:(id)interface;	// 0x37466955
// declared property setter: - (void)setExportedObject:(id)object;	// 0x37466931
@end

