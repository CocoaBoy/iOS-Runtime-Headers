/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLogConfig : NSObject <NSCopying> {
    SSLogFileOptions * _backingLogFileOptions;
    NSObject<OS_os_log> * _backingOSLogObject;
    NSString * _category;
    unsigned int  _environment;
    NSString * _outputDirectory;
    NSString * _outputFilename;
    NSObject<OS_dispatch_queue> * _propertyAccessQueue;
    NSString * _subsystem;
    BOOL  _writeToDisk;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *OSLogObject;
@property (nonatomic, retain) SSLogFileOptions *backingLogFileOptions;
@property (nonatomic, retain) NSObject<OS_os_log> *backingOSLogObject;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, readonly) BOOL debugLogsEnabled;
@property (nonatomic) unsigned int environment;
@property (nonatomic, readonly) SSLogFileOptions *logFileOptions;
@property (nonatomic, copy) NSString *outputDirectory;
@property (nonatomic, copy) NSString *outputFilename;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (nonatomic, readonly) BOOL shouldLog;
@property (nonatomic, readonly) BOOL shouldLogToDisk;
@property (nonatomic, copy) NSString *subsystem;
@property (nonatomic) BOOL writeToDisk;

+ (BOOL)_debugLogsEnabled:(id)arg1;
+ (BOOL)_deviceIsRunningInternalBuild;
+ (BOOL)_deviceIsRunningInternalOrSeedBuild;
+ (BOOL)_deviceIsRunningSeedBuild;
+ (id)_logFileDirectoryPathForSubsystem:(id)arg1 category:(id)arg2;
+ (id)_logFilenameForSubsystem:(id)arg1 category:(id)arg2;
+ (id)sharedAuthenticationConfig;
+ (id)sharedConfig;
+ (id)sharedDaemonConfig;
+ (id)sharedDaemonConfigOversize;
+ (id)sharedStoreServicesConfig;
+ (id)sharedStoreServicesConfigOversize;
+ (id)sharedWriteToDiskConfig;
+ (id)sharediTunesStoreConfig;
+ (id)sharediTunesStoreConfigOversize;

- (void).cxx_destruct;
- (id)OSLogObject;
- (id)backingLogFileOptions;
- (id)backingOSLogObject;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)debugLogsEnabled;
- (id)description;
- (unsigned int)environment;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)logFileOptions;
- (id)outputDirectory;
- (id)outputFilename;
- (id)propertyAccessQueue;
- (void)setBackingLogFileOptions:(id)arg1;
- (void)setBackingOSLogObject:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setEnvironment:(unsigned int)arg1;
- (void)setOutputDirectory:(id)arg1;
- (void)setOutputFilename:(id)arg1;
- (void)setPropertyAccessQueue:(id)arg1;
- (void)setSubsystem:(id)arg1;
- (void)setWriteToDisk:(BOOL)arg1;
- (BOOL)shouldLog;
- (BOOL)shouldLogToDisk;
- (id)subsystem;
- (BOOL)writeToDisk;

@end
