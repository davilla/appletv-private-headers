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
	int automaticTerminationOptOutCounter;	// 20 = 0x14
}
@property(retain) NSArray *arguments;	// G=0x31d0c7f1; S=0x31d82de5; converted property
@property(readonly, retain) NSDictionary *environment;	// G=0x31d829d1; converted property
@property(readonly, retain) NSString *hostName;	// G=0x31d82ec5; converted property
@property(retain) id processName;	// G=0x31d1d58d; S=0x31d83031; converted property
+ (id)processInfo;	// 0x31d0c769
- (id)init;	// 0x31d0c795
- (void)_exitIfSuddenTerminationEnabledWithStatus:(int)status;	// 0x31d833c5
- (void)_exitWhenSuddenTerminationEnabledWithStatus:(int)status;	// 0x31d833c9
- (int)_suddenTerminationDisablingCount;	// 0x31d833cd
- (unsigned)activeProcessorCount;	// 0x31d832b9
// converted property getter: - (id)arguments;	// 0x31d0c7f1
- (void)dealloc;	// 0x31d82949
- (void)disableSuddenTermination;	// 0x31d833bd
- (void)enableSuddenTermination;	// 0x31d833c1
// converted property getter: - (id)environment;	// 0x31d829d1
- (id)globallyUniqueString;	// 0x31d83111
// converted property getter: - (id)hostName;	// 0x31d82ec5
- (BOOL)isTranslated;	// 0x31d83365
- (unsigned)operatingSystem;	// 0x31d831c1
- (id)operatingSystemName;	// 0x31d831c5
- (id)operatingSystemVersionString;	// 0x31d83231
- (unsigned long long)physicalMemory;	// 0x31d83309
- (int)processIdentifier;	// 0x31d16ee5
// converted property getter: - (id)processName;	// 0x31d1d58d
- (unsigned)processorCount;	// 0x31d8325d
// converted property setter: - (void)setArguments:(id)arguments;	// 0x31d82de5
// converted property setter: - (void)setProcessName:(id)name;	// 0x31d83031
- (double)systemUptime;	// 0x31d833b9
- (id)userFullName;	// 0x31d831b9
- (id)userHomeDirectory;	// 0x31d831bd
- (id)userName;	// 0x31d831b5
@end

