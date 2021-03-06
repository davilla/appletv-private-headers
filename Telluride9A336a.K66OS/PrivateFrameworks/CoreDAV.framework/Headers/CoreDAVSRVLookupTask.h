/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAV-Structs.h"
#import "CoreDAVTask.h"

@class NSArray, NSString;

@interface CoreDAVSRVLookupTask : CoreDAVTask {
	NSString *_serviceString;	// 120 = 0x78
	NSArray *_fetchedRecords;	// 124 = 0x7c
	CFHostRef _host;	// 128 = 0x80
}
@property(retain) NSArray *fetchedRecords;	// G=0x32c44e29; S=0x32c44e3d; @synthesize=_fetchedRecords
@property(assign) CFHostRef host;	// G=0x32c44e61; S=0x32c44e71; @synthesize=_host
@property(retain) NSString *serviceString;	// G=0x32c44df1; S=0x32c44e05; @synthesize=_serviceString
- (id)initWithServiceString:(id)serviceString;	// 0x32c44541
- (void)dealloc;	// 0x32c445ed
- (id)description;	// 0x32c44669
// declared property getter: - (id)fetchedRecords;	// 0x32c44e29
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x32c44cd9
// declared property getter: - (CFHostRef)host;	// 0x32c44e61
- (void)performCoreDAVTask;	// 0x32c44765
// declared property getter: - (id)serviceString;	// 0x32c44df1
// declared property setter: - (void)setFetchedRecords:(id)records;	// 0x32c44e3d
// declared property setter: - (void)setHost:(CFHostRef)host;	// 0x32c44e71
// declared property setter: - (void)setServiceString:(id)string;	// 0x32c44e05
@end

