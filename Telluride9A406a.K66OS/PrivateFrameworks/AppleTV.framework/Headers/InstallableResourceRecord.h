/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDate;

__attribute__((visibility("hidden")))
@interface InstallableResourceRecord : NSObject {
@private
	NSString *name;	// 4 = 0x4
	NSString *version;	// 8 = 0x8
	NSString *path;	// 12 = 0xc
	NSDate *lastAccessed;	// 16 = 0x10
	unsigned long long totalBytes;	// 20 = 0x14
}
@property(retain, nonatomic) NSDate *lastAccessed;	// G=0x33009d65; S=0x33009d75; @synthesize
@property(copy, nonatomic) NSString *name;	// G=0x33009cc9; S=0x33009cd9; @synthesize
@property(copy, nonatomic) NSString *path;	// G=0x33009d31; S=0x33009d41; @synthesize
@property(assign, nonatomic) unsigned long long totalBytes;	// G=0x33009d99; S=0x33009db1; @synthesize
@property(copy, nonatomic) NSString *version;	// G=0x33009cfd; S=0x33009d0d; @synthesize
+ (id)resourceRecordFromResourcePath:(id)resourcePath;	// 0x330099fd
+ (id)resourceRecordFromResourcePath:(id)resourcePath withVersion:(id)version withLastAccessed:(id)lastAccessed;	// 0x330096a1
- (void)dealloc;	// 0x33009acd
// declared property getter: - (id)lastAccessed;	// 0x33009d65
// declared property getter: - (id)name;	// 0x33009cc9
// declared property getter: - (id)path;	// 0x33009d31
- (void)remove;	// 0x33009c59
- (void)save;	// 0x33009b55
// declared property setter: - (void)setLastAccessed:(id)accessed;	// 0x33009d75
// declared property setter: - (void)setName:(id)name;	// 0x33009cd9
// declared property setter: - (void)setPath:(id)path;	// 0x33009d41
// declared property setter: - (void)setTotalBytes:(unsigned long long)bytes;	// 0x33009db1
// declared property setter: - (void)setVersion:(id)version;	// 0x33009d0d
// declared property getter: - (unsigned long long)totalBytes;	// 0x33009d99
// declared property getter: - (id)version;	// 0x33009cfd
@end

