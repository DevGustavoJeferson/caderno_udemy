#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // sleep()

void bios_check() {
    printf("🔧 BIOS: Verificando componentes de hardware...\n");
    sleep(1);
    printf("✅ BIOS: Todos os dispositivos estão operacionais.\n\n");
}

void bootloader() {
    printf("💾 Bootloader: Localizando o sistema operacional...\n");
    sleep(1);
    printf("📂 Bootloader: Carregando o kernel para a memória.\n\n");
}

void os_start() {
    printf("🧠 Sistema Operacional: Inicializando serviços e interface...\n");
    sleep(1);
    printf("💻 Sistema pronto para uso!\n");
}

int main() {
    printf("⚡ Iniciando o processo de boot...\n\n");
    bios_check();
    bootloader();
    os_start();
    printf("\n🟢 Boot concluído com sucesso!\n");
    return 0;
}