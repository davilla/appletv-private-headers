/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ESDObjectFactory : NSObject {
}
+ (EshObject *)createObjectWithType:(unsigned short)type;	// 0x318d45ed
+ (EshObject *)createObjectWithType:(unsigned short)type version:(unsigned short)version;	// 0x318d58d9
+ (void)replaceHostEshFactoryWith:(EshObjectFactory *)with;	// 0x318c5f3d
+ (void)restoreHostEshFactory;	// 0x318e4db1
+ (void)setEshFactory:(EshObjectFactory *)factory;	// 0x319a6631
@end

