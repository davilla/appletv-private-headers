/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSData, NSString, NSBundle, UINibDecoder;

__attribute__((visibility("hidden")))
@interface UINibStorage : NSObject {
@private
	NSString *bundleResourceName;	// 4 = 0x4
	NSBundle *bundle;	// 8 = 0x8
	NSData *archiveData;	// 12 = 0xc
	UINibDecoder *nibDecoder;	// 16 = 0x10
	BOOL instantiatingForSimulator;	// 20 = 0x14
}
@property(copy, nonatomic) NSData *archiveData;	// G=0x3217cc79; S=0x3217d3dd; @synthesize
@property(retain, nonatomic) NSBundle *bundle;	// G=0x3217cc89; S=0x3217d3b5; @synthesize
@property(copy, nonatomic) NSString *bundleResourceName;	// G=0x3217cc99; S=0x3217d389; @synthesize
@property(assign, nonatomic) BOOL instantiatingForSimulator;	// G=0x3217cc49; S=0x3217cc59; @synthesize
@property(retain, nonatomic) UINibDecoder *nibDecoder;	// G=0x3217cc69; S=0x3217d409; @synthesize
// declared property getter: - (id)archiveData;	// 0x3217cc79
// declared property getter: - (id)bundle;	// 0x3217cc89
// declared property getter: - (id)bundleResourceName;	// 0x3217cc99
- (void)dealloc;	// 0x3217d309
// declared property getter: - (BOOL)instantiatingForSimulator;	// 0x3217cc49
// declared property getter: - (id)nibDecoder;	// 0x3217cc69
// declared property setter: - (void)setArchiveData:(id)data;	// 0x3217d3dd
// declared property setter: - (void)setBundle:(id)bundle;	// 0x3217d3b5
// declared property setter: - (void)setBundleResourceName:(id)name;	// 0x3217d389
// declared property setter: - (void)setInstantiatingForSimulator:(BOOL)simulator;	// 0x3217cc59
// declared property setter: - (void)setNibDecoder:(id)decoder;	// 0x3217d409
@end

