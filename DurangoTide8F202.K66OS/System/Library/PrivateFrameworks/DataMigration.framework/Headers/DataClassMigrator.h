/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface DataClassMigrator : NSObject {
	NSDictionary *_context;	// 4 = 0x4
}
@property(retain, nonatomic) NSDictionary *context;	// G=0x33c2c119; S=0x33c2c251; @synthesize=_context
@property(readonly, assign, nonatomic) BOOL didMigrateBackupFromDifferentDevice;	// G=0x33c2c199; 
@property(readonly, assign, nonatomic) BOOL didRestoreFromBackup;	// G=0x33c2c1d1; 
@property(readonly, assign, nonatomic) BOOL shouldPreserveSettingsAfterRestore;	// G=0x33c2c161; 
@property(readonly, assign, nonatomic) BOOL wasPasscodeSetInBackup;	// G=0x33c2c129; 
// declared property getter: - (id)context;	// 0x33c2c119
- (id)dataClassName;	// 0x33c2c101
- (void)dealloc;	// 0x33c2c209
// declared property getter: - (BOOL)didMigrateBackupFromDifferentDevice;	// 0x33c2c199
// declared property getter: - (BOOL)didRestoreFromBackup;	// 0x33c2c1d1
- (float)estimatedDuration;	// 0x33c2c109
- (float)migrationProgress;	// 0x33c2c111
- (BOOL)performMigration;	// 0x33c2c105
// declared property setter: - (void)setContext:(id)context;	// 0x33c2c251
// declared property getter: - (BOOL)shouldPreserveSettingsAfterRestore;	// 0x33c2c161
// declared property getter: - (BOOL)wasPasscodeSetInBackup;	// 0x33c2c129
@end
