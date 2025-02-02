/*
 * Copyright (c) 2015-2022 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */

#include <kern/debug.h>

#if !SKYWALK

#define STUB(_name)                                             \
__attribute__((noreturn))                                       \
int _name(void);                                                \
int                                                             \
_name(void)                                                     \
{                                                               \
	panic("stub called in a config with no SKYWALK");       \
	/* NOTREACHED */                                        \
	__builtin_unreachable();                                \
}

STUB(kern_buflet_get_data_address);
STUB(kern_buflet_get_data_offset);
STUB(kern_buflet_get_data_length);
STUB(kern_buflet_get_data_limit);
STUB(kern_buflet_get_object_address);
STUB(kern_buflet_get_object_limit);
STUB(kern_buflet_get_object_segment);
STUB(kern_buflet_set_data_address);
STUB(kern_buflet_set_data_offset);
STUB(kern_buflet_set_data_length);
STUB(kern_buflet_set_data_limit);
STUB(kern_buflet_set_buffer_offset);
STUB(kern_buflet_get_buffer_offset);
STUB(kern_buflet_set_gro_len);
STUB(kern_buflet_get_gro_len);
STUB(kern_buflet_get_next_buf);
STUB(kern_buflet_clone);
STUB(kern_buflet_clone_nosleep);
STUB(kern_channel_advance_slot);
STUB(kern_channel_available_slot_count);
STUB(kern_channel_get_context);
STUB(kern_channel_get_next_slot);
STUB(kern_channel_notify);
STUB(kern_channel_reclaim);
STUB(kern_channel_ring_get_container);
STUB(kern_channel_ring_get_context);
STUB(kern_channel_slot_get_context);
STUB(kern_channel_slot_attach_packet);
STUB(kern_channel_slot_detach_packet);
STUB(kern_channel_slot_get_packet);
STUB(kern_channel_increment_ring_stats);
STUB(kern_channel_increment_ring_net_stats);
STUB(kern_channel_tx_refill);
STUB(kern_channel_get_service_class);
STUB(kern_channel_event_transmit_status);
STUB(kern_netif_queue_rx_enqueue);
STUB(kern_netif_queue_tx_dequeue);
STUB(kern_netif_queue_get_service_class);
STUB(kern_copy_and_inet_checksum);
STUB(kern_inet_checksum);
STUB(kern_nexus_attr_create);
STUB(kern_nexus_attr_clone);
STUB(kern_nexus_attr_destroy);
STUB(kern_nexus_attr_set);
STUB(kern_nexus_attr_get);
STUB(kern_nexus_controller_create);
STUB(kern_nexus_controller_destroy);
STUB(kern_nexus_controller_alloc_provider_instance);
STUB(kern_nexus_controller_alloc_net_provider_instance);
STUB(kern_nexus_controller_bind_provider_instance);
STUB(kern_nexus_controller_deregister_provider);
STUB(kern_nexus_controller_free_provider_instance);
STUB(kern_nexus_controller_read_provider_attr);
STUB(kern_nexus_controller_register_provider);
STUB(kern_nexus_controller_unbind_provider_instance);
STUB(kern_nexus_deregister_domain_provider);
STUB(kern_nexus_get_default_domain_provider);
STUB(kern_nexus_get_context);
STUB(kern_nexus_get_pbufpool);
STUB(kern_nexus_register_domain_provider);
STUB(kern_nexus_netif_llink_add);
STUB(kern_nexus_netif_llink_remove);
STUB(kern_packet_clear_flow_uuid);
STUB(kern_packet_clone);
STUB(kern_packet_clone_nosleep);
STUB(kern_packet_get_euuid);
STUB(kern_packet_finalize);
STUB(kern_packet_get_buflet_count);
STUB(kern_packet_get_data_length);
STUB(kern_packet_get_compression_generation_count);
STUB(kern_packet_get_flow_uuid);
STUB(kern_packet_get_inet_checksum);
STUB(kern_packet_get_headroom);
STUB(kern_packet_get_link_broadcast);
STUB(kern_packet_get_link_ethfcs);
STUB(kern_packet_get_link_header_offset);
STUB(kern_packet_get_link_header_length);
STUB(kern_packet_get_link_multicast);
STUB(kern_packet_get_network_header_offset);
STUB(kern_packet_get_next_buflet);
STUB(kern_packet_get_object_index);
STUB(kern_packet_get_policy_id);
STUB(kern_packet_get_service_class);
STUB(kern_packet_get_service_class_index);
STUB(kern_packet_is_high_priority);
STUB(kern_packet_get_traffic_class);
STUB(kern_packet_get_timestamp);
STUB(kern_packet_get_transport_header_offset);
STUB(kern_packet_get_transport_new_flow);
STUB(kern_packet_get_transport_retransmit);
STUB(kern_packet_get_transport_last_packet);
STUB(kern_packet_get_transport_traffic_background)
STUB(kern_packet_get_transport_traffic_realtime)
STUB(kern_packet_set_compression_generation_count);
STUB(kern_packet_set_fpd_command);
STUB(kern_packet_set_fpd_context_id);
STUB(kern_packet_set_fpd_sequence_number);
STUB(kern_packet_set_flow_uuid);
STUB(kern_packet_set_inet_checksum);
STUB(kern_packet_set_headroom);
STUB(kern_packet_set_link_broadcast);
STUB(kern_packet_set_link_header_offset);
STUB(kern_packet_set_link_header_length);
STUB(kern_packet_set_link_multicast);
STUB(kern_packet_set_link_ethfcs);
STUB(kern_packet_set_network_header_offset);
STUB(kern_packet_set_policy_id);
STUB(kern_packet_set_service_class);
STUB(kern_packet_set_timestamp);
STUB(kern_packet_set_traffic_class);
STUB(kern_packet_set_transport_header_offset);
STUB(kern_packet_get_timestamp_requested);
STUB(kern_packet_get_tx_completion_status);
STUB(kern_packet_set_tx_completion_status);
STUB(kern_packet_tx_completion);
STUB(kern_packet_set_group_start);
STUB(kern_packet_get_group_start);
STUB(kern_packet_set_group_end);
STUB(kern_packet_get_group_end);
STUB(kern_packet_set_expire_time);
STUB(kern_packet_get_expire_time);
STUB(kern_packet_set_expiry_action);
STUB(kern_packet_get_expiry_action);
STUB(kern_packet_set_token);
STUB(kern_packet_get_token);
STUB(kern_packet_get_packetid);
STUB(kern_packet_set_vlan_tag);
STUB(kern_packet_get_vlan_tag);
STUB(kern_packet_get_vlan_id);
STUB(kern_packet_get_vlan_priority);
STUB(kern_packet_get_app_metadata);
STUB(kern_packet_set_wake_flag);
STUB(kern_packet_get_wake_flag);
STUB(kern_packet_add_buflet);
STUB(kern_packet_append);
STUB(kern_packet_get_next);
STUB(kern_packet_set_next);
STUB(kern_packet_set_chain_counts);
STUB(kern_packet_get_chain_counts);
STUB(kern_packet_set_trace_id);
STUB(kern_packet_get_trace_id);
STUB(kern_packet_trace_event);
STUB(kern_packet_copy_bytes);
STUB(kern_packet_get_flowid);
STUB(kern_packet_set_trace_tag);
STUB(kern_packet_get_trace_tag);
STUB(kern_packet_get_tx_nexus_port_id);
STUB(kern_packet_get_protocol_segment_size);
STUB(kern_packet_get_priv);
STUB(kern_packet_set_priv);
STUB(kern_packet_set_segment_count);
STUB(kern_packet_get_tso_flags);
STUB(kern_pbufpool_alloc);
STUB(kern_pbufpool_alloc_batch);
STUB(kern_pbufpool_alloc_batch_callback);
STUB(kern_pbufpool_alloc_nosleep);
STUB(kern_pbufpool_alloc_batch_nosleep);
STUB(kern_pbufpool_alloc_batch_nosleep_callback);
STUB(kern_pbufpool_create);
STUB(kern_pbufpool_destroy);
STUB(kern_pbufpool_free);
STUB(kern_pbufpool_free_batch);
STUB(kern_pbufpool_free_chain);
STUB(kern_pbufpool_get_context);
STUB(kern_pbufpool_get_memory_info);
STUB(kern_pbufpool_alloc_buffer);
STUB(kern_pbufpool_alloc_buffer_nosleep);
STUB(kern_pbufpool_free_buffer);
STUB(kern_pbufpool_alloc_buflet);
STUB(kern_pbufpool_alloc_buflet_nosleep);
STUB(kern_pbufpool_alloc_batch_buflet);
STUB(kern_pbufpool_alloc_batch_buflet_nosleep);
STUB(kern_pbufpool_free_buflet);
STUB(kern_segment_get_index);
#if NETWORKING
STUB(bpf_tap_packet_in);
STUB(bpf_tap_packet_out);
#endif
#undef STUB
#endif /* !SKYWALK */
