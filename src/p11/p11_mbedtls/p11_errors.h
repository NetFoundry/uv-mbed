/*
Copyright 2019 NetFoundry, Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

https://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef ZITI_SDK_P11_ERRORS_H
#define ZITI_SDK_P11_ERRORS_H

#endif //ZITI_SDK_P11_ERRORS_H

#define P11_ERRORS(XX) \
XX(CKR_OK) \
XX(CKR_CANCEL) \
XX(CKR_HOST_MEMORY) \
XX(CKR_SLOT_ID_INVALID) \
XX(CKR_GENERAL_ERROR) \
XX(CKR_FUNCTION_FAILED) \
XX(CKR_ARGUMENTS_BAD) \
XX(CKR_NO_EVENT) \
XX(CKR_NEED_TO_CREATE_THREADS) \
XX(CKR_CANT_LOCK) \
XX(CKR_ATTRIBUTE_READ_ONLY) \
XX(CKR_ATTRIBUTE_SENSITIVE) \
XX(CKR_ATTRIBUTE_TYPE_INVALID) \
XX(CKR_ATTRIBUTE_VALUE_INVALID) \
XX(CKR_ACTION_PROHIBITED) \
XX(CKR_DATA_INVALID) \
XX(CKR_DATA_LEN_RANGE) \
XX(CKR_DEVICE_ERROR) \
XX(CKR_DEVICE_MEMORY) \
XX(CKR_DEVICE_REMOVED) \
XX(CKR_ENCRYPTED_DATA_INVALID) \
XX(CKR_ENCRYPTED_DATA_LEN_RANGE) \
XX(CKR_FUNCTION_CANCELED) \
XX(CKR_FUNCTION_NOT_PARALLEL) \
XX(CKR_FUNCTION_NOT_SUPPORTED) \
XX(CKR_KEY_HANDLE_INVALID) \
XX(CKR_KEY_SIZE_RANGE) \
XX(CKR_KEY_TYPE_INCONSISTENT) \
XX(CKR_KEY_NOT_NEEDED) \
XX(CKR_KEY_CHANGED) \
XX(CKR_KEY_NEEDED) \
XX(CKR_KEY_INDIGESTIBLE) \
XX(CKR_KEY_FUNCTION_NOT_PERMITTED) \
XX(CKR_KEY_NOT_WRAPPABLE) \
XX(CKR_KEY_UNEXTRACTABLE) \
XX(CKR_MECHANISM_INVALID) \
XX(CKR_MECHANISM_PARAM_INVALID) \
XX(CKR_OBJECT_HANDLE_INVALID) \
XX(CKR_OPERATION_ACTIVE) \
XX(CKR_OPERATION_NOT_INITIALIZED) \
XX(CKR_PIN_INCORRECT) \
XX(CKR_PIN_INVALID) \
XX(CKR_PIN_LEN_RANGE) \
XX(CKR_PIN_EXPIRED) \
XX(CKR_PIN_LOCKED) \
XX(CKR_SESSION_CLOSED) \
XX(CKR_SESSION_COUNT) \
XX(CKR_SESSION_HANDLE_INVALID) \
XX(CKR_SESSION_PARALLEL_NOT_SUPPORTED) \
XX(CKR_SESSION_READ_ONLY) \
XX(CKR_SESSION_EXISTS) \
XX(CKR_SESSION_READ_ONLY_EXISTS) \
XX(CKR_SESSION_READ_WRITE_SO_EXISTS) \
XX(CKR_SIGNATURE_INVALID) \
XX(CKR_SIGNATURE_LEN_RANGE) \
XX(CKR_TEMPLATE_INCOMPLETE) \
XX(CKR_TEMPLATE_INCONSISTENT) \
XX(CKR_TOKEN_NOT_PRESENT) \
XX(CKR_TOKEN_NOT_RECOGNIZED) \
XX(CKR_TOKEN_WRITE_PROTECTED) \
XX(CKR_UNWRAPPING_KEY_HANDLE_INVALID) \
XX(CKR_UNWRAPPING_KEY_SIZE_RANGE) \
XX(CKR_UNWRAPPING_KEY_TYPE_INCONSISTENT) \
XX(CKR_USER_ALREADY_LOGGED_IN) \
XX(CKR_USER_NOT_LOGGED_IN) \
XX(CKR_USER_PIN_NOT_INITIALIZED) \
XX(CKR_USER_TYPE_INVALID) \
XX(CKR_USER_ANOTHER_ALREADY_LOGGED_IN) \
XX(CKR_USER_TOO_MANY_TYPES) \
XX(CKR_WRAPPED_KEY_INVALID) \
XX(CKR_WRAPPED_KEY_LEN_RANGE) \
XX(CKR_WRAPPING_KEY_HANDLE_INVALID) \
XX(CKR_WRAPPING_KEY_SIZE_RANGE) \
XX(CKR_WRAPPING_KEY_TYPE_INCONSISTENT) \
XX(CKR_RANDOM_SEED_NOT_SUPPORTED) \
XX(CKR_RANDOM_NO_RNG) \
XX(CKR_DOMAIN_PARAMS_INVALID) \
XX(CKR_CURVE_NOT_SUPPORTED) \
XX(CKR_BUFFER_TOO_SMALL) \
XX(CKR_SAVED_STATE_INVALID) \
XX(CKR_INFORMATION_SENSITIVE) \
XX(CKR_STATE_UNSAVEABLE) \
XX(CKR_CRYPTOKI_NOT_INITIALIZED) \
XX(CKR_CRYPTOKI_ALREADY_INITIALIZED) \
XX(CKR_MUTEX_BAD) \
XX(CKR_MUTEX_NOT_LOCKED) \
XX(CKR_NEW_PIN_MODE) \
XX(CKR_NEXT_OTP) \
XX(CKR_EXCEEDED_MAX_ITERATIONS) \
XX(CKR_FIPS_SELF_TEST_FAILED) \
XX(CKR_LIBRARY_LOAD_FAILED) \
XX(CKR_PIN_TOO_WEAK) \
XX(CKR_PUBLIC_KEY_INVALID) \
XX(CKR_FUNCTION_REJECTED) \
XX(CKR_VENDOR_DEFINED)
