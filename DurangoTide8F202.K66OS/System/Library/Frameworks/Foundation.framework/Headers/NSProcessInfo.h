/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSDictionary;

@interface NSProcessInfo : NSObject {
@private
	NSDictionary *environment;	// 4 = 0x4
	NSArray *arguments;	// 8 = 0x8
	NSString *hostName;	// 12 = 0xc
	NSString *name;	// 16 = 0x10
	void *reserved;	// 20 = 0x14
}
@property(retain) NSArray *arguments;	// G=0x3242d29d; S=0x32491d39; converted property
@property(readonly, retain) NSDictionary *environment;	// G=0x324463d9; converted property
@property(readonly, retain) NSString *hostName;	// G=0x32491ce1; converted property
@property(retain) id processName;	// G=0x32435041; S=0x32491ca5; converted property
+ (id)processInfo;	// 0x32418845
- (void)_exitIfSuddenTerminationEnabledWithStatus:(int)status;	// 0x32491c35
- (void)_exitWhenSuddenTerminationEnabledWithStatus:(int)status;	// 0x32491c39
- (int)_suddenTerminationDisablingCount;	// 0x32491c3d
- (unsigned)activeProcessorCount;	// 0x32491f2d
// converted property getter: - (id)arguments;	// 0x3242d29d
- (void)dealloc;	// 0x32491d7d
- (void)disableSuddenTermination;	// 0x32418889
- (void)enableSuddenTermination;	// 0x3241a0c9
// converted property getter: - (id)environment;	// 0x324463d9
- (id)globallyUniqueString;	// 0x32491dfd
// converted property getter: - (id)hostName;	// 0x32491ce1
- (BOOL)isTranslated;	// 0x32491ed9
- (unsigned)operatingSystem;	// 0x32491c31
- (id)operatingSystemName;	// 0x32491c45
- (id)operatingSystemVersionString;	// 0x32491eb9
- (unsigned long long)physicalMemory;	// 0x32491fd5
- (int)processIdentifier;	// 0x32440a29
// converted property getter: - (id)processName;	// 0x32435041
- (unsigned)processorCount;	// 0x32491f81
// converted property setter: - (void)setArguments:(id)arguments;	// 0x32491d39
// converted property setter: - (void)setProcessName:(id)name;	// 0x32491ca5
- (double)systemUptime;	// 0x32492031
- (id)userFullName;	// 0x32491ea1
- (id)userHomeDirectory;	// 0x32491ead
- (id)userName;	// 0x32491e95
@end
